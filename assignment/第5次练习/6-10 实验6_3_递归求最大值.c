/*写一个函数可以读入n（0<n<100）个整数，并求出这n个整数中的最大值。

此题要求递归求解，且不允许使用全局变量。在此题的所有提交中只要出现非递归提交，无论其他提交是否是递归求解此题均为0分。

函数接口定义：
int findMax(int n) ;
其中 n 是用户传入的参数。 n 的值大于0且小于100； 函数须返回 读入的n个整数中最大的那个数。

裁判测试程序样例：
#include <stdio.h>

int findMax(int n) ;

int main()
{   
    int n ; 
    
    scanf("%d", &n); 
    printf("%d\n" , findMax( n ) ) ; 
    
    return 0;
}

/* 请在这里填写答案 */
输入样例：
6
15  30  34  10  89 5

输出样例：
89
*/

int findMax(int n)
{
    int tmp, max;
    if (n == 1)
    {
        scanf("%d", &tmp);
        return tmp;
    }
    else
    {
        max = findMax(n - 1);
        scanf("%d", &tmp);
        return (tmp > max ? tmp : max); //条件运算符，格式为 (条件) ? (条件为真时执行的表达式) : (条件为假时执行的表达式)
    }
}
