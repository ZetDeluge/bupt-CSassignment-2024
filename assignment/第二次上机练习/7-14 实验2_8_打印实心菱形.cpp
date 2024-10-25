/*已知一个整数n，你要根据n打印出n阶的实心菱形。

输入格式:
只有一个整数n(0<n<40，代表要打印的菱形阶数)。测试用例保证合法。

输出格式:
n阶实心菱形(占2乘n-1行)。

输入样例:
5

输出样例:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}

/* 以下是一种基于字符数组的实现，但结果存在格式错误，希望利用者能对此进行改进
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 2 * n - 1;
    char a[m][m];
    for (int i = 0; i < m; i ++)
        for (int j = 0; j < m; j ++)
        {
            if (abs(i + 1 - n) + abs(j + 1 - n) < n) a[i][j] = '*'; //曼哈顿距离思想
            else a[i][j] = ' ';
        }
    for (int i = 0; i < m; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
*/
