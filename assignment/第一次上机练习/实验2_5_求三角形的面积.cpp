/*已知三角形的三条边长a、b、c，求三角形的面积。三角形的面积可以根据海伦公式来计算，这里S代表周长的一半，Area代表三角形的面积：
S=(A+B+C)/2 
Area= sqrt(S(S−a)(S−b)(S−c))
求一个数的平方根需要用库函数sqrt(x)。参数x可以是整数或者浮点数，函数返回值是一个浮点数。在处理浮点数的时候，建议使用双精度浮点型(double型)变量，
注意：为了使用该函数，需要在main函数之前加上预处理语句：
#include <math.h>
%lf的默认输出为6位小数，如果想要输出3为小数，则应为%.3lf。

输入格式:
为三个用空格分隔的正整数a、b、c，代表三角形的三边长度。

输出格式:
只有一行。当输入的三条边a、b、c可以构成三角形时（即两条边的长度和大于第三条边的长度），输出三角形的面积，输出结果保留3位小数，假如a=5,b=12,c=13，则输出“30.000”；当a、b、c三条边无法构成三角形时,则输出“The edges cannot make up of a triangle.”。测试用例保证运算中用到的整数可以用int型存储，小数可以用double型存储。

输入样例:
5 12 13

输出样例:
30.000
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b){
        double s = (a + b + c) / 2;
        printf("%.3lf\n", sqrt(s * (s - a) * (s - b) * (s - c)));
    }
    else cout << "The edges cannot make up of a triangle." << endl;
    return 0;
}
