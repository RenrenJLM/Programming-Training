/*
编写一个程序，要求用户按欧洲风格输入汽车的耗油量(每 100 公里消耗的汽油量(升)) ，然后将其转换为美国风格的耗油量——一每加仑多少英里。
注意，除了使用不同的单位计量外， 美国方法(距离/燃料〕与欧洲方法(燃料/距离)相反。
100 公里等于 62.14 英里，1 加仑等于 3.875 升。因此，19mpg 大约合12.4L/100km，27mpg 大约合8.7L/1OOkm。
*/

#include <iostream>
using namespace std;

int main() {
    double litersPer100Km;
    cout << "Enter the liters per 100 km: ";
    cin >> litersPer100Km;
    cout << "The miles per gallon is: " << 62.14 / (litersPer100Km / 3.875) << endl;
    return 0;
}