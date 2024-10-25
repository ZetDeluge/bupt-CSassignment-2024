/*给定一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。

输入格式:
只有一行，为一个字符序列，字符序列长度小于100，以回车键结束。

输出格式:
只有一行，为4个用空格分隔的整数，依次代表输入字符序列中的英文字符，空格，数字以及其他字符的数量。

输入样例:
Happy new year #100101 !

输出样例:
12 4 6 2
  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int chc = 0, spc = 0, dic = 0, mkc = 0; //chc指字母计数，spc指空格计数，dic指数字计数，mkc指其他字符计数
    string str;
    getline(cin, str); //用于读行，包括空格。若使用c，则可通过getchar实现
    for (int i = 0, len = str.size(); i < len; i ++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) chc ++; //string类相当于可变长的char数组，能通过数组的特性来操作
        else if (str[i] >= '0' && str[i] <= '9') dic ++;
        else if (str[i] == ' ') spc ++;
        else if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~')) mkc ++;
    }
    cout << chc << " " << spc << " " << dic << " " << mkc << endl;
    return 0;
}
