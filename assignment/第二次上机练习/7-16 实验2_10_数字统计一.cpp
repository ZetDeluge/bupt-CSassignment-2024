/*请你写一段程序，统计各类数字的占比。
提示：输出%时需要用%%才能输出。
  
输入格式:
只有一行，为用空格分隔的若干整数，最后一个整数为0。测试用例保证输入中只包含这一个0。

输出格式:
共三行，依次分别输出3、5、7的倍数的占比（如果某个数同时为多个数的倍数，如15，70等，则不参与统计，但要计到总数中）。占比采用百分数形式，且保留2位小数。这里的占比指的是这类数字的数量跟所有数字的总数（不包括最后的0）比。测试用例保证所有整数可以用int存储。

输入样例:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 0

输出样例:
25.00%
15.00%
10.00%
*/

#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
    while (cin >> n, n) //输入值为0时结束循环
    {
        cnt ++;
        if (n % 3 == 0 && n % 5 != 0 && n % 7 != 0) cnt3 ++;
        else if (n % 3 != 0 && n % 5 == 0 && n % 7 != 0) cnt5 ++;
        else if (n % 3 != 0 && n % 5 != 0 && n % 7 == 0) cnt7 ++;
    }
    double per3 = (double)cnt3 / (double)cnt, per5 = (double)cnt5 / (double)cnt, per7 = (double)cnt7 / (double)cnt;
    printf("%.2lf%%\n", per3 * 100);
    printf("%.2lf%%\n", per5 * 100);
    printf("%.2lf%%\n", per7 * 100);
    return 0;
}
