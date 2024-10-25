/*已知两个整数x和y（x为任意整数，y为非负整数），利用循环结构计算x的y次幂并输出。假设x,y及x的y次幂不会超过int型范围。

输入格式:
只有一行，为两个用空格分隔的整数，依次代表x与y的值。

输出格式:
也只有一行，为一个整数，即x的y次幂的计算结果（测试数据中保证没有0的0次幂）。例如输出2的4次幂结果，即16。

输入样例:
-7 5

输出样例:
-16807
  */

#include <iostream>

using namespace std;

int power(int x, int y)
{
    int res = 1;
    while (y --) //(bool)false等同于(int)0，当y=0时即结束循环
        res *= x;
    return res;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0;
}
