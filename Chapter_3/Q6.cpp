/*
编写一个程序，要求用户输入驱车里程(英里)和使用汽油量〈加仑)，然后指出汽车耗油量为一加仑的里程。
如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的结果——即每 100 公里的耗油量(升)。
*/

#include <iostream>
using namespace std;

int main() {
    double miles, gallons;
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    cout << "The miles per gallon is: " << miles / gallons << endl;
    return 0;
}