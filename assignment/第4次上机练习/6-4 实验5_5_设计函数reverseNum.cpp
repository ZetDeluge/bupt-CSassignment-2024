/*设计函数int reverseNum(int n)，返回正整数n反转后的形式，如reverseNum(12345)的值为54321。

输入与输出要求：
输入一个正整数n，n的取值范围不会超过int类型变量，n不会有前导0，n的结尾也不会有0。输出该正整数的反转形式，输出如“The reverse form of number 12345 is 54321.”，占一行。

函数接口定义：
函数原型如下：
int reverseNum(int n);
其中 n 是用户传入的参数。 n 的值不超过int的范围。函数须返回 n 反转后的数字。

裁判测试程序样例：
函数被调用例子如下：
#include<stdio.h>

int reverseNum(int) ; 

int main()
{
    int        num ;

    scanf("%d",&num);
    printf("The reverse form of number %d is %d.\n",num,reverseNum(num)) ;

    return 0;
}

/* 请在这里填写答案 */
输入样例：
12345

输出样例：
The reverse form of number 12345 is 54321.
  */

int reverseNum(int n)
{
    int rev = 0, x;
    while (n)
    {
        x = n % 10;
        rev = 10 * rev + x;
        n /= 10;
    }
    return rev;
}
