/*某电商规定，如果订单商品总价小于20元，则付快递费10元；如果订单商品总价大于等于20元且小于30元，则付快递费8元；如果订单商品总价大于等于30元且小于40元，则付快递费5元；如果某订单商品总价大于等于40元，则包邮。现某订单共4件商品，请你算一下该订单实付多少。

输入格式:
只有一行，为四个用空格分隔的正整数，代表4件商品的价格。

输出格式:
为一个整数，为客户实际需要支付的钱数。测试用例保证输入合法，且所有整数可以用int型存储。

输入样例:
1 2 3 4

输出样例:
20
*/

#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0;
    for (int i = 0; i < 4; i ++){
        cin >> x;
        sum += x;
    }
    if (sum >= 40) cout << sum << endl;
    else if (sum < 40 && sum >= 30) cout << sum + 5 << endl;
    else if (sum < 30 && sum >= 20) cout << sum + 8 << endl;
    else cout << sum + 10 << endl;
    return 0;
}
