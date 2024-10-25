/*已知一个正整数n（可以用int存储），你的任务是将n的最低位与最高位上的数字对调，次低位与次高位上的数字对调，以此类推，直到中间位。最后得到一个新整数并将新的数字输出。需要注意的是：如果当最低位数字与最高位数字对调后，数字的长度变短（也就是最低位为0），则不能对这个数进行位数对调处理。

输入格式:
只有一个正整数，即n。

输出格式:
当n可以进行数字对调时，例如n=123，你应输出“321”；当n不可以进数字对调时，例如n=980，你应输出“The number cannot be changed.”。

输入样例:
1365

输出样例:
5631
  */

#include <iostream>
#include <string>

using namespace std;

bool areChgble(int x) //判断末位是否为零（是不是有点脱裤子放屁了。。明明可以写在if的条件里的。。
{
    if (x % 10 == 0) return false;
    return true;
}

int main()
{
    int n;
    string str;
    cin >> n;
    if (areChgble(n))
    {
        string str = to_string(n); //to_string函数，用于将int转换为string
        int len = str.size();
        for (int i = len - 1; i >= 0; i --)
            cout << str[i];
        cout << endl;
    }
    else cout << "The number cannot be changed." << endl;
    return 0;
}
