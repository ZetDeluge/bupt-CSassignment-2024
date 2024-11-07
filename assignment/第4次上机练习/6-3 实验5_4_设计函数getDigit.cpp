/*设计函数int getDigit(long long n)，计算并返回正整数n的长度。

输入与输出要求：
输入一个正整数n，n的取值范围不会超过long long类型变量。输出该正整数的位数，如“The integer 20 has 2 digits.”，占一行。注意单词digits的单复数形式。

函数接口定义：
函数原型如下：
int getDigit(long long n);
其中 n 是用户传入的参数。 n 的值不超过long long的范围。函数须返回 n 的长度。

裁判测试程序样例：
函数被调用 的例子如下：
#include<stdio.h>

int getDigit(long long n); 

int main()
{
    long long     n ;
    int            len ;
    
    scanf("%lld",&n);
    len = getDigit(n) ;
    if (len > 1)
        printf("The integer %lld has %d digits.\n",n, len) ;
    else
        printf("The integer %lld has %d digit.\n",n, 1) ;
    return 0 ;    
}

/* 请在这里填写答案 */
输入样例：
1234567890

输出样例：
The integer 1234567890 has 10 digits.
*/

// To iterate is Human, to Recurse, Divine. 人理解迭代，神理解递归。 （递归真的好难懂qwq）
int getDigit(long long x)
{
    if (x / 10 == 0) return 1;
    else return (1 + getDigit(x / 10));
}
