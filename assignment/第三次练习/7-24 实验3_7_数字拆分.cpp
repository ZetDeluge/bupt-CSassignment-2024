/*已知一个正整数n，n的范围是1—999999999。你的任务是把这个整数分解为单个数字，然后从左至右依次打印出每一个数字。例如将整数“12345”分解，得到“1 2 3 4 5”。

输入格式:
只有一个正整数。测试用例保证合法。

输出格式:
只有一行，为输入整数的拆分结果，相邻两个数字之间有一个空格，最后一个数字后是换行符。例如12345的拆分结果为：1 2 3 4 5。

输入样例:
12345

输出样例:
1 2 3 4 5
  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.size(); //<string>库函数，用于获取string长度
    for (int i = 0; i < len - 1; i ++)
        cout << str[i] << " ";
    cout << str[len - 1] << endl;
    return 0;
}

//也可以通过将该整数逐位相除实现，取n为3位数为例，即a = n / 100, b = (n - a * 100) / 10, c = n - a * 100 - b * 10
