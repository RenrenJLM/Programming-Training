/*
编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值)。该程序按下面的格式要求用户输入光年值，并显示结果:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
天文单位是从地球到太阳的平均距离(约 150000000 公里或 93000000 英里)，光年是光一年走的距离(约 10 万亿公里或 6 万亿英里) (除太阳外，最近的恒星大约离地球 4.2 光年〉。
请使用 doub1e 类型(参见程序清单2.4)，转换公式为:
l 光年 = 63240 天文单位
*/

#include <iostream>
using namespace std;

double LightyearsToAstro(double lightyears);

int main()
{
    double lightyears;
    cout << "Enter the number of light years: ";
    cin >> lightyears;
    cout << lightyears << " light years = " << LightyearsToAstro(lightyears) << " astronomical units." << endl;
    return 0;
}

double LightyearsToAstro(double lightyears)
{
    return 63240 * lightyears;
}