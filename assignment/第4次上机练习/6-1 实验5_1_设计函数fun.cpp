/*已知分段函数，当x<1时，y=x；当1<=x<=10时，y=2x-1；当10< x <=100时，y=3x-11；当x>100时，y=x*x-24。
设计函数int fun(int x)，根据分段函数计算y值。
函数返回值范围不会超过int型变量。
输入为一个整数x,即自变量x。输出为函数值y的结果

函数接口定义：
函数原型 如下：
int fun ( int x );
其中 x 是用户传入的参数。 x 的值不超过int的范围。函数须返函数值y的结果。

裁判测试程序样例：
#include<stdio.h>

int    fun(int) ;

int main()
{
    int    x ;
    
    scanf("%d",&x);
    printf("The result is:y=%d\n",fun(x)) ;

    return 0 ;    
}

/* 请在这里填写答案 */
输入样例：
-99

输出样例：
The result is:y=-99
  */

int fun(int x)
{
    if (x < 1) return x;
    else if (x >= 1 && x <= 10) return (2 * x - 1);
    else if (x > 10 && x <= 100) return (3 * x - 11);
    else return (x * x - 24);
}
