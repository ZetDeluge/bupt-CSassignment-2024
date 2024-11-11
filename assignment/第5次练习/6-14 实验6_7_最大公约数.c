/*设计递归函数int GCD(int a,int b);计算正整数a和b的最大公约数并返回。如GCD(32,48)为16。
GCD(a,b)递归定义为：
GCD(a,b)=GCD(b,a MOD b) 当 a MOD b≠0
GCD(a,b)=b 当 a MOD b=0

输入与输出要求：
输入两个正整数a和b，输出两数的最大公约数，占一行。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
int GCD(int a , int b );
其中 a 和 b 都是用户传入的参数。a 和 b  的值不超过int的范围。函数的返回值为a 和 b  的最大公约数。

裁判测试程序样例：
#include<stdio.h>

int GCD(int a , int b );

int main()
{
    int        a , b ;
    
    scanf("%d%d", &a , &b );
    printf( "%d\n" , GCD( a, b ) ) ;
     
    return 0 ;    
}

/* 请在这里填写答案 */
输入样例：
32 48

输出样例：
16
*/

int GCD(int a, int b)
{
    if (a < b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    if (a % b == 0) return b;
    return (GCD(b, a % b));
}
