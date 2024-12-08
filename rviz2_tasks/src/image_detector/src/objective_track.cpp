#include <objective_track.hpp>

// 展示函数
void show(cv::Mat img,string name){
    cv::imshow(name,img);
    cv::waitKey(0);
    cv::destroyAllWindows();
}

// 返回待识别物体颜色的HSV上下界
void cvt_hsv(cv::Scalar hsv,cv::Scalar &l_hsv,cv::Scalar &h_hsv){
    int b = hsv.val[0];
    l_hsv = cv::Scalar(b - 55,100,100);
    h_hsv = cv::Scalar(b + 55,255,255);
}

// 对mask二级图找轮廓
void track(cv::Mat &mask,cv::Mat &img){
    cv::GaussianBlur(mask,mask,cv::Size(3,3),0); // 滤波平滑处理，便于轮廓的平滑连接
    vector<vector<cv::Point>> contours;
    cv::findContours(mask,contours,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE);
    int object_pos;
    double maxn = 0;
    for (int i = 0; i < contours.size(); i++){
        double temp = cv::contourArea(contours[i]);
        if (temp > maxn){
            maxn = temp;
            object_pos = i;
        }
    }

    if (contours.size() == 0) return;
    
    // 计算目标轮廓的外接矩形，以矩形中心为轮廓中心
    cv::Rect rect_object = cv::boundingRect(contours[object_pos]);
    cv::rectangle(img,rect_object,cv::Scalar(0,0,255));
    int cx = (rect_object.x + rect_object.width / 2);
    int cy = (rect_object.y + rect_object.height / 2);
    cv::circle(img,cv::Point(cx,cy),10,cv::Scalar(0,0,255),-1);
}

// 测试物体追踪是否正常运行
void objective_track_test()
{
    cv::Mat img;
    cv::VideoCapture cap;
    cap.open(0);
    int width = 640;
    int height = 480;
    cap.set(cv::CAP_PROP_FRAME_WIDTH,width);
    cap.set(cv::CAP_PROP_FPS,30);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT,height);

    if (!cap.isOpened()){
        std::cout << "Fail to open!" << "\n";
    }

    // 创建待识别颜色的BGR单像素值
    cv::Scalar track_color(100,187,144);
    //cv::Mat track_color_single(1,1,CV_8UC3,track_color); // 注意宏定义的常量不需要命名空间
    //cv::cvtColor(cv::Mat(1,1,CV_8UC3,track_color),hsv,cv::COLOR_BGR2HSV);
    cv::Mat hsv,mask,res;
    cv::Scalar l_hsv,h_hsv;
    cvt_hsv(track_color,l_hsv,h_hsv);

    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT,cv::Size(5,5),cv::Point(-1,-1));

    while (true){
        cap >> img;
        cv::cvtColor(img,hsv,cv::COLOR_BGR2HSV); // 原图转换颜色空间到HSV
        cv::inRange(hsv,l_hsv,h_hsv,mask); // 根据阈值生成对应掩膜
        cv::bitwise_and(img,img,res,mask); // 用掩膜对原图进行处理
        
        cv::morphologyEx(mask,mask,cv::MORPH_DILATE,kernel,cv::Point(-1,-1),4); // 膨胀操作
        track(mask,img);
        cv::imshow("origin",img);
        //cv::imshow("hsv",hsv);
        //cv::imshow("mask",mask);
        //cv::imshow("res",res);
        res = cv::Mat(res.rows,res.cols,res.type(),cv::Scalar(0,0,0)); // 清空res图像，否则bitwis_and运算会累加
        if (cv::waitKey(1) == 27) break;
    }
    cv::destroyAllWindows();
    cap.release();
}