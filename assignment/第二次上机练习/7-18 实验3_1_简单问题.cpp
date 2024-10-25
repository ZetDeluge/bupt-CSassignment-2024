/*任意给定n个整数，求这n个整数序列的和、最小值和最大值。

输入格式:
第一行为一个整数n（0<n<100)，代表要输入的整数个数；第二行为用空格分隔的n个整数。测试用例保证所有整数及求和结果等均可以用int存储。

输出格式:
只有一行，为三个空格分隔的，依次代表整数序列的和、最大值和最小值。

输入样例:
5
10 20 30 40 50

输出样例:
150 50 10
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, min, max;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
        sum += a[i];
    }
    min = a[0], max = a[0];
    for (int i = 1; i < n; i ++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << sum << " " << max << " " << min << endl;
    return 0;
}
