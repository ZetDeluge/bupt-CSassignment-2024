/*回文是指正读和反读都一样的数或文本段。例如，12321、55555、45554、11611都是回文数。输入一个长度不超过10位的整数n，判断它是否是回文数。

输入格式:
只有一个整数n，即待判断的数字。测试用例保证n可以用int存储。

输出格式:
当n为回文数时输出“Yes”，否则输出“No”。

输入样例:
12321

输出样例:
Yes
*/

//原谅我数学不好，只会用字符串逃课。。
#include <iostream>
#include <string>

using namespace std;

bool strCompr(string a, string b)
{
    if (a.size() != b.size()) return false;
    for (int i = 0, len = a.size(); i < len; i ++)
        if (a[i] != b[i]) return false;
    return true;
}

string reverse(string a)
{
    for (int i = 0, len = a.size(); i < len / 2; i ++)
    {
        int res = 0;
        res = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = res;
    }
    return a;
}

int main()
{
    string str;
    cin >> str;
    int len = str.size();
    string rev = reverse(str);
    if (str.size() <= 1) cout << "Yes" << endl;
    else
    {
        for (int i = 0; i < len; i ++)
            rev[i] = str[len - 1 - i];
        if (strCompr(str, rev)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
