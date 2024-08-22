/*
编写一个程序，要求用户以整数方式输入秒数(使用 long 或 long long 变量存储)，然后以天、小时、分钟和秒的方式显示这段时间。
使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>
#include <climits>
using namespace std;

const int DIVISOR_DH = 24;
const int DIVISOR_HM = 60;
const int DIVISOR_MS = 60;

int main()
{
    cout << "CHAR_BIT = " << CHAR_BIT << " , sizeof(int) = " << sizeof(int) << " , sizeof(long) = " << sizeof(long) << endl;
    long seconds_i;
    int days, hours, minutes, seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds_i;
    days = seconds_i/(DIVISOR_DH*DIVISOR_HM*DIVISOR_MS);
    hours = seconds_i%(DIVISOR_DH*DIVISOR_HM*DIVISOR_MS)/(DIVISOR_HM*DIVISOR_MS);
    minutes = (seconds_i - days*DIVISOR_DH*DIVISOR_HM*DIVISOR_MS - hours*DIVISOR_HM*DIVISOR_MS)/DIVISOR_MS;
    seconds = (seconds_i - days*DIVISOR_DH*DIVISOR_HM*DIVISOR_MS - hours*DIVISOR_HM*DIVISOR_MS)%DIVISOR_MS;
    cout << seconds_i << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}