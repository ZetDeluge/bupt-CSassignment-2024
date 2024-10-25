/*将百分制成绩score按下列原则划分其等级：
score≥90等级为A；
80 ≤score<90，等级为B；
70≤score<80，等级为C；
60≤score<70,等级为D；
score<60,等级为E。

输入格式:
只有一个整数，代表成绩score。测试用例保证所有整数可以用int存储。

输出格式:
只有一行，当成绩小于0或大于100时为"The score is out of range!"（不包括引号），否则为输入的学生成绩对应的等级。

输入样例:
89

输出样例:
B
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 100 || n < 0) cout << "The score is out of range!" << endl;
    else if (n >= 90) cout << "A" << endl;
    else if (n < 90 && n >= 80) cout << "B" << endl;
    else if (n < 80 && n >= 70) cout << "C" << endl;
    else if (n < 70 && n >= 60) cout << "D" << endl;
    else cout << "E" << endl;
    return 0;
}
