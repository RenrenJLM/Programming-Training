#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int* arr_p = arr;
    cout << "sizeof (int) = " << sizeof (int) << endl               // sizeof (int) = 4
         << "sizeof arr = " << sizeof arr << endl                   // sizeof arr = 24，此种情况下，arr不会被解释为地址
         << "sizeof (arr + 1) = " << sizeof (arr + 1) << endl       // sizeof (arr + 1) = 8，此时 arr 被解释为地址，但不等于 24 + 24，即 48
         << "sizeof (&arr + 1) = " << sizeof (&arr + 1) << endl     // sizeof (&arr + 1) = 8 ？？？
         << "arr = " << arr << ", &arr = " << &arr << endl          // arr = 0x61fe00, &arr = 0x61fe00，计算机以字节（byte）为最小的可寻址和可操作的数据单位
         << "arr + 1 = " << arr + 1 << endl       // arr + 1 = 0x61fe04
         << "&arr + 1 = " << &arr + 1 << endl      // &arr + 1 = 0x61fe18，前后相差 0x14 = 20，即 4 个 int 的长度
         << "arr[1] = " << arr[1] << endl
         << "*(arr + 1) = " <<  *(arr + 1) << endl
         << "*(arr_p + 1) = " <<  *(arr_p + 1) << endl;
    return 0;
}