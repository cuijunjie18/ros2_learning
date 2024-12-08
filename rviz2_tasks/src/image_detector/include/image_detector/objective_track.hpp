#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;

// 展示函数
void show(cv::Mat img,string name = "Test");

// 返回待识别物体颜色的HSV上下界
void cvt_hsv(cv::Scalar hsv,cv::Scalar &l_hsv,cv::Scalar &h_hsv);

// 对mask二级图找轮廓
void track(cv::Mat &mask,cv::Mat &img);

// 测试
void objective_track_test();

/*
[109, 164, 123]
[118, 166, 138]
[61, 162, 77]
[106, 186, 144]
[95, 175, 126]
[90, 216, 148]
[155, 211, 193]
[154, 213, 194]
[87, 217, 144]
*/

// 100,187,144