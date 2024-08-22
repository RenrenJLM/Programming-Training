/*
编写一个小程序，要求用户使用一个整数指出自己的身高(单位为英寸)，然后将身高转换为英尺和英寸。
该程序使用下划线字符来指示输入位置。另外，使用一个 const 符号常量来表示转换因子。
1 英尺 = 12 英寸 = 0.3048 米
*/

#include <iostream>
using namespace std;

const int divisor = 12;
void DisplayHeight(int height_inch);

int main(){
    int height_inch;
    cout << "请输入您的身高（单位为英寸）：___";
    cin >> height_inch;
    DisplayHeight(height_inch);
    return 0;
}

void DisplayHeight(int height_inch)
{
    int height_f = height_inch/divisor;
    int height_i = height_inch%divisor;
    cout << "您的身高为：" << height_f << " 英尺 " << height_i << " 英寸 ";
}

