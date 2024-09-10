#include <iostream>
// #include <new>       // 不包含 new 头文件也可以运行

char buffer[512];
int main()
{
    using namespace std;
    int* p1 = new int{1};
    int* p2 = new(buffer) int{2};
    int* p3 = new(buffer + sizeof(int)) int{3};
    cout << "p1 = " << p1 << ", *p1 = " << *p1 << endl;
    cout << "The address of buffer is: " << (void*)buffer << endl;
    cout << "p2 = " << p2 << ", *p2 = " << *p2 << endl;
    cout << "p3 = " << p3 << ", *p3 = " << *p3 << endl;
    delete p1;

    return 0;
}