/*请写出将一个整数逆序输出的函数。

注意：此题要求递归求解且不允许使用数组，不允许使用全局变量。如果违反要求则没有分。

函数接口定义：
void reverse(int n) ;
其中 n 是用户传入的参数。 n 的值大于0且不超过int的范围； 函数的返回值为空，其功能是逆序输出 n。测试用例保证输入的n末尾不为0。

裁判测试程序样例：
#include <stdio.h>

void reverse(int n) ; 

int main()
{
    int     n;
         
    scanf("%d",&n);
    reverse(n) ;
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
输入样例：
1234

输出样例：
4321
*/

void reverse(int n)
{
    if (n / 10 == 0) printf("%d", n);
    else 
    {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}
