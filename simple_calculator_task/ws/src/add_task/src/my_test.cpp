#include <rclcpp/rclcpp.hpp>

using namespace std;

int main()
{
    vector<int> a;
    for (int i = 10; i >= 0; i--) a.emplace_back(i);
    sort(a.begin(),a.end());
    for (auto x : a) cout << x << " ";
    cout << "\n";
    return 0;
}