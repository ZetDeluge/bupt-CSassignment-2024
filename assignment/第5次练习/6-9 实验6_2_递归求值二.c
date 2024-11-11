/*现有序列： s = a + a + 3 + a + 6 +…+ a + 3 * n，请写出递归求s的程序。

输入只有一行，为两个用空格分隔正整数，分别代表n(0<n) 和 a(1<a)

输出也只有一行，为此情况下s的值。（测试用例保证所有整数可以用 int存储）。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
int getSum(int n , int a) ;
其中 n 和 a 都是用户传入的参数。 函数须计算结果。

裁判测试程序样例：

#include <stdio.h>

int getSum(int n , int a) ;

int main()
{
       int        n , a ; 
       
       scanf( "%d%d" , &n , &a );       
       printf( "%d\n" , getSum( n , a ) );

    return 0;
}

/* 请在这里填写答案 */
输入样例：
1 2

输出样例：
7
*/

int getSum(int n, int a)
{
    if (n == 0) return a;
    return (getSum(n - 1, a) + a + 3 * n);
}
