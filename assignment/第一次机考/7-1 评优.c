/*某班正在评优，规则规定，一个班最多只能推荐2名同学。经过几轮评比后还有3位同学有资格。最后一轮的规则非常简单，就是比这三个同学的加权成绩。成绩好的2位同学可以获得推荐资格。现请你写一段程序，计算这两个成绩好的同学的加权成绩的平均值。

输入格式:
只有一行，为三个用空格分隔的正的浮点数，依次代表三个人的加权成绩。测试用例保证所有浮点数都可以用float存储，也建议用float存储。

输出格式:
也只有一行，为一个浮点数，代表成绩高的两名同学的平均成绩（保留一位小数）。

输入样例:
95.6 93.8 90.7

输出样例:
94.7
  */

#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double avg;
    if (a > b)
    {
        avg += a;
        if (c > b) avg += c;
        else avg += b;
        printf("%.1lf\n", avg / 2);
        return 0;
    }
    else
    {
        avg += b;
        if (c > a) avg += c;
        else avg += a;
        printf("%.1lf\n", avg / 2);
        return 0;
    }
}
