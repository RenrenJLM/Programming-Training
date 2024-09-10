#include <iostream>
using namespace std;

int main()
{
    char ch1, ch2;
    cout << "Please input ch1 and ch2 : ";          // Please input ch1 and ch2 : 67
    cin >> ch1;                                     // ch1 = 6，并不等于67
    cin >> ch2;                                     // ch2 = 7，直接读取输入流中的 7，详情见 《C++ Primer Plus》P157
    cout << "ch1 = " << ch1 << ", ch2 = " << ch2 <<endl;                                // ch1 = 6, ch2 = 7
    cout << "int(ch1) = " << int(ch1) << ", int(ch2) = " << int(ch2) << endl;           // int(ch1) = 54, int(ch2) = 55
    return 0;
}