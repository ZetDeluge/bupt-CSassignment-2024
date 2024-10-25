/*已知一个自然数，求n以内（不包括n）同时能被3与7整除的所有自然数之和的平方s。s保证在int范围之内。

输入格式:
只有一行，为自然数n。

输出格式:
只有一行，为一个自然数，代表计算结果。

输入样例:
43

输出样例:
3969
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i < n; i ++)
    {
        if (i % 3 == 0 && i % 7 == 0) sum += i;
    }
    cout << sum * sum << endl;
    return 0;
}
