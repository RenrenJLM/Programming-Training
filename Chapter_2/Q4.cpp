/*
编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示:
Enter your age: 29
Your age in months is: 348
*/

#include <iostream>
using namespace std;

int YearsToMonths(int years);

int main()
{
    int years, months;
    cout << "Enter your age: " << endl;
    cin >> years;
    months = YearsToMonths(years);
    cout << "Your age in months is: " << months << endl;
    return 0;
}

int YearsToMonths(int years)
{
    return years * 12;
}