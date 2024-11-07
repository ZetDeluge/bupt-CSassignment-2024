/*设计函数int getDays(int year,int month)，根据给定的年year和月份month,计算该月的天数并返回。
提示：注意闰年的判断。

输入与输出要求：
输入两个整数y,m，即年份与月份。输出该年内该月的天数，占一行。
测试用例保证输入合法。

函数接口定义：
函数原型如下：
int getDays(int year,int month);
其中 year 和 month 都是用户传入的参数，分别代表年份和月份。函数须返回该月的天数。

裁判测试程序样例：
函数被调用的例子如下：
#include<stdio.h>

int    getDays(int,int) ;

int main()
{
    int    year, month ;
    
    scanf("%d%d",&year,&month);
    printf("There are %d days in month %d year %d.",getDays(year,month), month, year) ;

    return 0 ;    
}

/* 请在这里填写答案 */
输入样例：
1995 7

输出样例：
There are 31 days in month 7 year 1995.
  */

int getDays(int yr, int mon)
{
    if (yr % 100 != 0)
    {
        if (yr % 4 != 0)
        {
            if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) return 31;
            else if (mon == 2) return 28;
            else return 30;
        }
        else
        {
            if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) return 31;
            else if (mon == 2) return 29;
            else return 30;
        }
    }
    else
    {
        if (yr % 400 == 0)
        {
            if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) return 31;
            else if (mon == 2) return 29;
            else return 30;
        }
        else
        {
            if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) return 31;
            else if (mon == 2) return 28;
            else return 30;
        }
    }
}
