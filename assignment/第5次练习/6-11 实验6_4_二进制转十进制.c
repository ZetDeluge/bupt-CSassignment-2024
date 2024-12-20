/*设计递归函数int convert(int n);用于将二进制数n转换为十进制数并返回。
递归函数设计思路与提示：
如将1101转换为十进制的形式：
1101=1 * 2^0 + 0 * 2^1 + 1 * 2^2 + 1 * 2^3 = 1101 % 10 + convert(110) * 2 ；110 = 0 * 2^0 + 1 * 2^1 + 1 * 2^2 = 110 % 10 + convert(11) * 2；11 = 1 * 2^0 + 1 * 2^1 = 11 % 10 + convert(1) * 2 ；convert(1) = 1 ；
所以得到以下结论：当n==0或n==1时，函数返回n，否则返回n%10+convert(n/10)*2 。

输入与输出要求：
输入一个整数n，代表二进制数，其长度不大于10。输出转换后的十进制数，占一行。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
int convert(int n);
其中 n 是用户传入的参数。 n 的长度不大于10；函数的返回值为转换后的十进制数。

裁判测试程序样例：
#include<stdio.h>

int convert(int n);

int main()
{
    int        n ;
    
    scanf("%d",&n);

    printf("%d\n",convert(n)) ;
    return 0 ;    
}

/* 请在这里填写答案 */
输入样例：
101010

输出样例：
42
*/

int convert(int n)
{
    if (n == 0 || n == 1) return n;
    return (n % 10 + convert(n / 10) * 2);
}
