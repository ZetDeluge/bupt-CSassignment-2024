/*现有一个由n（1<n<100）个整数组成数列，这n个整数的绝对值都小于100。请你写一段程序分别求出这n个整数中奇数的平均值和偶数的平均值。

输入格式:
共两行，第一行为一个整数，代表n，第二行为n个用空格分隔的整数，代表待处理数列。测试用例保证合法。

输出格式:
只有一行，为两个一个空格分隔的浮点数，依次代表输入数列中所有奇数的平均值和所有偶数的平均值（保留1为小数，数据类型建议用float）。

输入样例:
10
1 2 3 4 5 6 7 8 9 10

输出样例:
5.0 6.0
  */

#include <stdio.h>

int main()
{
    int n;
    int odcnt = 0, evcnt = 0; //odd count, even count
    double odavg = 0, evavg = 0; //odd average, even average（其实应该是sum的，但是题面写的是平均值就这么写下去了（
    scanf("%d", &n);
    while (n --)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            evavg += x;
            evcnt ++;
        }
        else
        {
            odavg += x;
            odcnt ++;
        }
    }
    printf("%.1lf %.1lf\n", (double)(odavg / odcnt), (double)(evavg / evcnt));
    return 0;
}
