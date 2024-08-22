/*
编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
l 度为 60 分， 1 分等于 60 秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
下面是该程序运行时的情况:
Enter a latitude in degrees , minutes , and seconds:
First , enter the degrees: 37
Next , enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int divisor_dm = 60;
const int divisor_ms = 60;

int main()
{
    float degrees, minutes;
    int seconds;
    cout << "Enter a latitude in degrees , minutes , and seconds: \n"
         << "First , enter the degrees: ";
    cin >> degrees;
    cout << "Next , enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    degrees = degrees+(float(minutes)+float(seconds)/divisor_ms)/divisor_dm;        // 此处需要注意进行强制类型转换！！
    cout << setprecision(6);
    cout << degrees << " degrees" << endl;
}