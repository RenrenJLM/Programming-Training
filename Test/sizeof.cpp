#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10] = {1,2,3,4,5,6,7,8,9};
    char st[10] = {1,2,3,4,5};
    char ss[] = "1234";
    char* ps = ss;
    int lens = sizeof(s);
    int lenst = sizeof(st);
    int lenps = sizeof(ps);     // 见 P90
    cout << "sizeof(char) = " << sizeof(char) << endl
         << "sizeof(s) = " << lens << endl
         << "sizeof(st) = " << lenst << endl
         << "sizeof(ps) = " << lenps << endl
         << "sizeof(*ps) = " << sizeof(*ps) << endl;
    cout << "strlen(ss) = " << strlen(ss) << endl
         << "strlen(ss) = " << strlen(ss) << endl;
}