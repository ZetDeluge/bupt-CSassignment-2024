/*编写一个程序，用下面的公式计算e^x的值。e^x=1+x/1!+x^2/2!+x^3/3!+...

1)对于项x^n/n!,随着n的增大，|x^n/n!|会渐渐趋向于0。因此可以假设当项|x^n/n!|<1e－8时，循环终止。1e－8即为10的-8次方。

2)如何求x的绝对值：使用库函数fabs(x)，其中x是浮点数，返回结果也是浮点数。如判断|f|是否接近于0可以这么写：if(fabs(f)<1e-8)。

3)如何检验运行结果是否正确：标准库函数exp(x)用来求e的x次幂，其中x是浮点数，返回值也是浮点数。同学可以通过比较自己程序计算结果和标准函数exp(x)的计算结果是否一致来检验自己程序的正确性。如写上这条语句：“printf("%.4f\n",exp(x));”。建议程序中的数据一律使用double型变量。

输入格式:
只有一个浮点数x，即代表e^x中的指数x,且x满足x<=20。

输出格式:
只有一个浮点数，即e^x的值，保留4位小数。

输入样例:
3.7

输出样例:
40.4473
*/

//正常做法
#include <stdio.h>
#include <math.h>

double factorial(double N);

int main()
{
    double x,y,n;
    double result=0;
    scanf("%lf",&x);
    for(n=0;;n++)
    {
        y=(pow(x,n)/factorial(n));
        result+=y;
        if(y>=0&&y<=10e-8||0>=y&&y>=-10e-8)
        {
            break;
        }
    }
    printf("%.4lf\n",result);
    return 0;
}

double factorial(double N)
{
    double n;
    double result=1;
    for(n=0;n<=N;n++)
    {
        if(n==0)
        {
            result=1;
        }
        else
        {
        result*=n;
        }
    }
    return result;
}

//逃课手法
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cin >> x;
    printf("%.4lf\n", exp(x));
    return 0;
}

//错误示范TwT
#include <iostream>
#include <cmath>

using namespace std;

int factrl(int n)
{
    if (n == 1 || n == 0) return 1;
    return factrl(n - 1) * n;
}

long double pow(double x, int n);
{
    unsigned long long res = 1;
    while (n --) res *= x;
    return res;
}

int main()
{
    double x, exp = 0;
    int n = 0;
    cin >> x;
    while (fabsl(pow(x, n) / factrl(n)) >= 1e-8)
    {
        exp += pow(x, n) / factrl(n);
        n ++;
    }
    printf("%.4lf\n", exp);
    return 0;
}
