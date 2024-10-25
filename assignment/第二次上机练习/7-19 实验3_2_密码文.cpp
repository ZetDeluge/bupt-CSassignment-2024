/*已知一个英文单词，该单词中只包含大写字母“A—Z”与小写字母“a—z”。你的任务是将英文单词翻译成密码文。翻译规则是把所有字母用它后面的第三个字母替换，并假设字符a接在字符z后面，字符A接在字符Z后面。例如：zero将被翻译成chur。

输入格式:
只有一行，为一个长度不超过100，只包含英文大小写字母的字符串（以回车换行符‘\n’结尾）。

输出格式:
只有一行，为对应字符串的密码文。

输入样例:
AZazbf

输出样例:
DCdcei
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0, len = str.size(); i < len; i ++)
    {
        if ((str[i] >= 'x' && str[i] <= 'z') || (str[i] >= 'X' && str[i] <= 'Z')) str[i] -= 23; //char做计算的时候视为(int)对应的ASCII码
        else str[i] += 3;
    }
    cout << str << endl;
}
