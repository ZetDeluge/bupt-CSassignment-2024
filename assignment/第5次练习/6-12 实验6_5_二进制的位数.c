/*设计递归函数int countBinary(int n); 用于将非负十进制整数n转换成二进制形式，并返回该二进制数的位数。如十进制数13的二进制形式为1101，位数为4，那么调用countBinary(13)的结果为4。

输入与输出要求：
输入一个非负整数n。输出求得的结果，如输入“13”，输出“4”，占一行。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
int countBinary(int n);
其中 n 是用户传入的参数。 n 的值不超过int的范围。函数的返回值为 n的二进制形式的位数。

裁判测试程序样例：
#include<stdio.h>

int countBinary(int);

int main()
{
    int        n;
    
    scanf("%d",&n);
    printf("%d\n",countBinary(n));
    
    return 0 ;
}

/* 请在这里填写答案 */
输入样例：
13

输出样例：
4
  */

int countBinary(int n)
{
    if (n == 0 || n == 1) return 1;
    return (countBinary(n / 2) + 1);
}
