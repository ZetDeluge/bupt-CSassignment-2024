/*现有函数f(n)，n为大于等于0的整数。当n等于0时f(n) = 0，当n大于0时 f(n)=f(n-1) +n 
3
 

注意：此题要求用递归求解，且不允许使用全局变量，否则没有分。

函数接口定义：
int    fuc(int n) ;
其中 n 是用户传入的参数。 n 的值不超过200。函数的返回值为对应的f(n)的计算结果。

裁判测试程序样例：
#include<stdio.h>

int    fuc(int n) ;

int main()
{
    int n ;
    
    scanf("%d",&n); 
    printf("%d\n",fuc(n));
  
    return 0 ;
}

/* 请在这里填写答案 */
输入样例：
2

输出样例：
9
*/

int fuc(int n)
{
    if (n == 0) return 0;
    return (n * n * n + fuc(n - 1));
}
