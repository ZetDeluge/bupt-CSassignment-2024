/*设计递归函数void void printFactor( int, int );打印出对n进行素数分解的结果。

当执行void printFactor(60,1)时，打印效果为：
60=2*2*3*5。
关于素数分解的描述，见讲义。（参考：https://oi-wiki.org/math/number-theory/pollard-rho/）

设计程序，已知一段数据范围[a,b]，且a<=b，要求对其中的每一个数进行素数分解。你也可以设计其它辅助函数，如判断素数的函数isPrime(n)。
输入与输出要求：
输入两个正整数a、b，代表所分解的区间，满足1<=a<=b<=100000，且b-a<=100。输出b-a+1行，即b-a+1个数的分解。

注意：此题要求递归求解，且不允许使用全局变量，其他方式不得分。

函数接口定义：
void printFactor( int, int ); 
其中第一个参数为待分解的整数，第二个参数需自行设计。函数无返回值。

裁判测试程序样例：
#include<stdio.h>

void printFactor( int, int ); 

int main()
{
    int a,b,i ;
    
    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;    
    
    return 0;
}

/* 请在这里填写答案 */
输入样例：
100 105

输出样例：
100=2*2*5*5
101=101
102=2*3*17
103=103
104=2*2*2*13
105=3*5*7
  */

void printFactor(int x, int y)
{
    if (y == 1)
    {
        if (x == 1)  printf("%d=%d\n", x, x);
        else printf("%d=", x);
    }
    else if (x == 1)
    {
        printf("\n");
        return;
    }
    int i;
    for (i = 2; i <= x; i ++)
    {
        if (x % i == 0)
        {
            if (y == 1) printf("%d", i);
            else printf("*%d", i);
            return printFactor(x / i, 2);
        }
    }
}
