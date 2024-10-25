/*有表达式如下：

a / ( b * c - d )

请按要求计算 。

输入格式:
只有一行，为4个用空格分隔的浮点数，依次代表a,b,c,d（请用double 类型存储）。

输出格式:
如果除数为0，则输出error，否则输出该表达式的值（保留1位小数）。

输入样例:
66.09 7.7 3.5 1.6

输出样例:
2.6*/

//后续assignment中皆为cpp实现，并提供相应语句的c实现

#include <iostream> //若使用c，则将此改为c头文件<stdio.h>
#include <cmath> //若使用c，则将此改为c头文件<math.h>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d; //若使用c，则改为scanf实现
    if (abs(b * c - d) <= 1e-12) cout << "error" << endl; //若使用c，则改为printf实现
    else printf("%.1lf\n", a / (b * c - d));
    return 0;
}
