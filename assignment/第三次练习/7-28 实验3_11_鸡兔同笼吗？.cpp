/*鸡有一个头两条腿，兔子有一个头4条腿，蜻蜓有一个头6条腿。没有例外。一个笼子里共有m个头，n条腿，问鸡、兔和蜻蜓各有多少？

输入格式:
只有一行，为两个正整数m和n，分别代表头的个数和腿的个数数。

输出格式:
有若干行，每一行为一组解，格式均为用空格分隔的三个整数，依次代表鸡的个数、解兔子的个数和蜻蜓的个数。多组解的输出顺序按解鸡的个数小到大排序。
测试数据保证可以用int存储。

输入样例:
15 40

输出样例:
在这里给出相应的输出。例如：

10 5 0
11 3 1
12 1 2
*/

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m == 0) cout << "0 0 0" << endl;
    for (int hen = 0; hen <= (n / 2); hen ++)
        for (int rab = 0; rab <= (n / 4); rab ++)
            for (int drgfly = 0; drgfly <= (n / 6); drgfly ++)
                if ((2 * hen + 4 * rab + 6 * drgfly == n) && (hen + rab + drgfly == m))
                    cout << hen << " " << rab << " " << drgfly << endl;
    return 0;
} 
