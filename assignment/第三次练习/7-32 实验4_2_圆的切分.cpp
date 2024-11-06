/*在一个平面上有一个圆和n条直线，这些直线中每一条在圆内同其他直线相交，假设没有3条直线相交于一点，试问这些直线将圆分成多少区域。

输入格式:
只有一个整数n(0<=n<100)。

输出格式:
只有一个整数，为圆被n条直线分成的区域的块数。

输入样例:
1

输出样例:
2
  */

//Attention is all you need.
//注意到，n=0->res=1; n=1->res=1+1; n=2->res=1+1+2...
#include <iostream>

using namespace std;

int main()
{
    int n, res = 1;
    cin >> n;
    for (int i = 0; i <= n; i ++)
        res += i;
    cout << res << endl;
    return 0;
}
