/*
编写一个C++程序，它使用3 个用户定义的函数(包括main( ))，并生成下面的输出:
Three blind mice
Three blind mice
See how they run
See how they run
*/

#include <iostream>
using namespace std;
void sentence1();
void sentence2();

int main()
{
    sentence1();
    sentence1();
    sentence2();
    sentence2();
    return 0;
}

void sentence1()
{
    cout << "Three blind mice" << endl;
}

void sentence2()
{
    cout << "See how they run" << endl;
}