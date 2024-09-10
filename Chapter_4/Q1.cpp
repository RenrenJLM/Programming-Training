/*
编写一个 C++ 程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。
假设用户请求 A 、B 或 C ， 所以不必担心 D 和 F 之间的空挡。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your first name? ";
    string name;
    getline(cin, name);
    cout << "What is your last name? ";
    string surname;
    getline(cin, surname);
    cout << "What letter grade do you deserve? ";
    char dgrade;
    cin >> dgrade;
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << surname << ", " << name << endl;
    char grade = dgrade + 1;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}