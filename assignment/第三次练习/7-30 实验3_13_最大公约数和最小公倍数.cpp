/*已知两个正整数m和n，求其最大公约数和最小公倍数。

输入格式:
两个用空格分隔的正整数m和n。

输出格式:
只有一行，为两个用空格分隔的正整数，依次代表m和n的最大公约数和最小公倍数。测试用例保证m、n及其最小公倍数可以用int存储。

输入样例:
12 36

输出样例:
12 36
  */

//逃课手法，好孩子不要学（（
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << " " << lcm(m, n) << endl;
    return 0;
}

//手写gcd和lcm（参考：https://oi-wiki.org/math/number-theory/gcd/）
#include <iostream>

using namespace std;

int gcd(int a, int b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b)
}


int main()
{
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << " " << lcm(m, n) << endl;
    return 0;
}
//偷偷告诉你这个答案没AC（
