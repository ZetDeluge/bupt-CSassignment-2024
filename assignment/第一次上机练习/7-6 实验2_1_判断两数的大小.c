/*已知有两个整数，请使用if-else选择结构将它们中的较大数选择出来，存到max变量中；将较小数选择出来，存到min变量中，并将选择结果输出。

输入格式:
只有一行，为用空格分隔的两个整数。测试用例保证这两个数可以用int类型存储。

输出格式:
如果输入的两个整数相等，则输出“The two numbers are equal.”，如果不等则按如下格式输出：“The larger number is 100, the smaller number is 25.”（假设输入的两个数分别为100和25）。

输入样例:
100 25

输出样例:
The larger number is 100, the smaller number is 25.*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d\n",&a, &b);
    if (a == b) printf("The two numbers are equal.\n");
    else if (a > b) printf("The larger number is %d, the smaller number is %d.\n", a, b);
    else printf("The larger number is %d, the smaller number is %d.\n", b, a);
    return 0;
}
