/*已知正整数n与数列公式:
An = 1*2*3+2*3*4+3*4*5+…+(n-2)*(n-1)*n (n>=3)
An = 0 (n=1,2)
请根据n值计算该数列的前n项和的值,并输出。n的取值范围是(1<=n<=3000)。
注意：这里的An 只是一项，而我们要求的是计算该数列的前n项和。
提示：由于n值很大，建议使用long long型变量存储结果。

输入格式:
只有一个正整数n(1<=n<=3000)。

输出格式:
只有一个整数，为计算结果。

输入样例:
3000

输出样例:
12149993250000600
  */

#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    if (n <= 2) 
    {
        cout << 0;
        return 0;
    }
    long long ans = 0;
    for (int j = 3; j <= n; j ++) 
    {
        long long res = 0;
        for (long long i = 0; i < j - 2; i ++) 
        {
            res += (i + 1) * (i + 2) * (i + 3);
        }
        ans += res;
    }
    
    cout << ans << endl;
    return 0;
}
