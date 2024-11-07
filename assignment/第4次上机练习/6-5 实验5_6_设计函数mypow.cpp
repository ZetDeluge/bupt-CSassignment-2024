/*设计函数int mypow(int x,int n)，返回正整数x的n次幂，如mypow(2,10)值为1024。

输入与输出要求：
输入两个非负整数x、和n，x的n次幂不会超过int型范围。输出计算结果，占一行。

函数接口定义：
函数原型如下：
int mypow(int x,int n);
其中 x 和 n 都是用户传入的参数。 x 、n 以及x 的n次幂都不超过int的范围。函数须返回 x 的 n 次幂。

裁判测试程序样例：
函数被调用的例子如下：
#include<stdio.h>

int mypow(int , int ) ;

int main()
{
    int x, n ;
    
    scanf("%d%d",&x,&n) ;
    printf("%d\n",mypow(x,n)) ;
                
    return 0;
}

/* 请在这里填写答案 */
输入样例：
在这里给出一组输入。例如：

2 10

输出样例：
在这里给出相应的输出。例如：

1024
*/

//迭代写法
int mypow(int x, int n)
{
    int res = 1;
    while (n --)
        res *= x;
    return res;
}

//递归写法
int mypow(int x, int n)
{
    if (n == 0) return 1;
    return (x * mypow(x, n - 1)); 
}
