/*
编写一个小程序，要求以几英只几英寸的方式输入其身高， 并以磅为单位输入其体重。(使用 3 个变量来存储这些信息。)
该程序报告其 BMI (Body Mass Index ，体重指数)。为了计算 BMI ， 该程序以英寸的方式指出用户的身高( 1 英尺为 12 英寸)，
并将以英寸为单位的身高转换为以米为单位的身高( 1 英寸 = 0.0254 米〉。
然后，将以磅为单位的体重转换为以千克为单位的体重( 1 千克 = 2.2 磅)。最后，计算相应的 BMI——体重(千克)除以身高(米)的平方。用符号常量表示各种转换因子。
*/

#include <iostream>
using namespace std;

const int divisor_fi = 12;
const float divisor_im = 0.0254;
const float divisor_kp = 2.2;

int main()
{
    int height_f, height_i;
    float height;
    cout << "请以__英尺__英寸的顺序输入您的身高。\n";
    cin >> height_f >> height_i;

    float weight_p, weight_k;
    cout << "请输入您的体重(磅)：\n";
    cin >> weight_p;

    height = height_f*divisor_fi+height_i;
    weight_k = weight_p/divisor_kp;
    cout << "您的身高是：" << height << " 英寸。\n";
    height = height*divisor_im;
    cout << "您的身高是：" << height << " 米。\n"
         << "您的体重是：" << weight_k << "千克\n";

    float BMI = weight_k/height/height;
    cout << "您的 BMI 为：" << BMI << endl;
}