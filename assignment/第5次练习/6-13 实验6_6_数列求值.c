/*现有序列： s = 1 + a + a^2 +…+ a^n+1
其中a>0,n>0，且均为整数。 测试用例保证所有整数可以用int存储。
请写出递归求s的函数。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
int evaluation(int n,int a);
其中 n 和 a 都是用户传入的参数,分别代表数列中的n和a，返回值为所求结果。

裁判测试程序样例：
#include <stdio.h>

int    evaluation(int n,int a) ;
int main()
{
       int        n , a ; 
       
       scanf("%d%d",&n,&a);       
       printf("%d\n",evaluation(n,a));

    return 0;
}

/* 请在这里填写答案 */
输入样例：
1 2

输出样例：
7
*/

int _pow(int a, int x)
{
    if (x == 0) return 1;
    return (_pow(a, x - 1) * a);
}

int evaluation(int n, int a)
{
    if (n == 0) return (1 + a);
    return (evaluation(n - 1, a) + _pow(a, n + 1));
}
