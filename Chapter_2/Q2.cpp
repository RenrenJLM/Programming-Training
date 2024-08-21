/* 编写一个C++程序，它要求用户输入一个以 long 为单位的距离，然后将它转换为码(一 long 等于220 码)。*/
#include <iostream>
using namespace std;

int main()
{
    int distancelong, distanceyard;
    cout << "Enter the distance in long: " << endl;
    cin >> distancelong;
    distanceyard = distancelong * 220;
    cout << "The distance in yard is: " << distanceyard << endl;
    return 0;
}