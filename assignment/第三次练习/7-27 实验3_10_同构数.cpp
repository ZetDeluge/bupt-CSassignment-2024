/*所谓“同构数”是指这样的数，它出现在它的平方数的右边，例如5的平方数是25, 25的平方数是625，所以5和25都是同构数。你的任务是判断整数x是否是同构数。若是同构数，输出“Yes”，否则输出“No”。x的取值范围是(1<=x<=10000),如果输入的x不在允许范围内，则输出错误提示信息“x out of range”。

输入格式:
只有一个整数。测试用例保证所有输入可以用int存储。

输出格式:
只有一行，为判断结果。

输入样例:
20000

输出样例:
20000 out of range
*/

//打表做法，好孩子不要学（（
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 1 || x > 10000) cout << x << " out of range" << endl;
    else{
    if (x == 1 || x == 5 || x == 6 || x == 25 || x == 76 || x == 376 || x == 625 || x == 9376)
        cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}

//正常做法（参考：https://github.com/ProgrameThinking/Bupt_2021_scs_exp_and_text/blob/c_repo/2021-计算导论实验/2021-计算导论-实验五/实验3_10_同构数.c，欢迎给21级学长Star和Fork）
#include <stdio.h>
#include <math.h>
bool judgement(int N)
{
    long long power,n,q,m;
    long long x=0;
    power=pow(N,2);
    m=N;
    while(m>10)
    {
        m/=10;
        x++;
    }
    n=pow(10,x+1);
    q=power%n;
    if(q==N)
        return true;
    else
        return false;
}

int main()
{
    int N,judge;
    scanf("%d",&N);
    if((N<1)||(N>10000))
        printf("%d out of range",N);
    else
    {
        judge=judgement(N);
        if(judge==1)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
