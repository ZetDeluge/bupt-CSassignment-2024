/*记数是人类用来表示和计算数量的基本方法。在记数过程中，我们通常使用一系列有序的符号或数字来表示数量。这些符号或数字可以是简单的（如手指计数），也可以是复杂的（如现代数学中的数字系统）。这里有一个非常重要的概念就是数制。数制中表示数值大小的那些固定的数字符号称为数码。每种数制所使用数码的个数称为该进制数的基数。比如十进制的基数为10，二进制的基数为2。一个数码处在不同位置上所代表的值不 同，每个数码所表示的数值等于该数码乘以一个与数码所在位置相关的常数，这个常数叫做位权。位权的大小是以该数制的基数为底、数码所在位置的序号为指数的整数次幂。例如：二进制数101，左边的数码1的位权是2^2，中间的数码0的位权是2^1，右边的数码1的位权是2^0。十进制数12.1，小数点前面的数码1的位权是10^1，数码2的位权是10^0，小数点后面的数码1的位权是10^−1。
事实上对于任意一个R进制数都可以表示为该数制的数码与基数的幂次的乘积之和，即对任意的R进制数a_n−1a_n−2…a_1a_0a_−1a_−2…a^−m，都可以表示成按位权展开的多项式之和的形式：a_n−1×R^n−1+a_n−2×R^n−2+…+a_1×R^1+a_0×R^0+a_−1×R^−1+a^−2×R^−2+…+a_−m×R^−m。其中，R是数制的基数，a_i(i = -m,…,-2,-1,0,1.,…,n-1) 为该数制的数码，n为该R进制数的整数部分的位数，m为小数部分的位数。
尽管不同进制在表示数值时使用的数字和进位规则不同，但它们都可以表示相同的数值范围，只是表示方式和长度不同。因此，在理论上讲，各种进制是等价的。
现给定十进制正整数，和一个进制的基数（10进制表示），请你写一个函数将这个正整数变为该进制的数码与基数的幂次的乘积之和。

输入：
第一行为一个整数T（0<T<100），代表共T组测试用例。后边是T行，每行均为两个用一个空格分隔的整数，依次代表待处理十进制整数n(0<n<100000000)，和基数base(1<base<100)。测试用例保证合法。
输出：
若干行，每组测试用例的格式都是一样的，先输出测试用例的序号（见输出样例），然后幂次从小到大的顺序输出多项式中每一项的数码和权值（用一个空格分隔），每行输出一项（具体见输出样例），如果数码为0，则不输出该项。
样例解释：
第一组测试用例，10进制整数12345可以表示为 5×10^0+4×10^1+3×10^2+2×10^3+1×10^4 ，即 12345 = 5 + 40 + 300 + 2000 + 10000 。
第二组测试用例，10进制整数12345可以表示为 1×2^0+1×2^3+1×2^4+1×2^5+1×2^12^+1×2^13（1 ，2，6，7，8 ，9 ，10，11次幂所乘的数码均为0，所以没有输出）， 即12345 = 1 + 8 + 16 + 32 + 4096 + 8192 。（特别的，由于二进制的数码只有0和1两个，因此任意一个正整数都可以惟一的表示为若干个2的幂次之和。）

函数接口定义：
void    printBasePower( int number , int base ) ;
其中 number 和 base 都是用户传入的参数。number 代表待处理10进制正整数； base 是进制的基数。函数没有返回值，但要按要求输出结果。

裁判测试程序样例：
#include <stdio.h>

void    printBasePower( int number , int base ) ;

int main()
{
    int        i , T , n , base ;
    
    scanf( "%d" , &T ) ;
    for ( i = 1 ; i <= T ; i++ )
    {
        scanf( "%d%d" ,  &n , &base ) ;
        printf("Test Cases %d :\n" , i ) ;
        printBasePower( n , base ) ;
    }
    
    return 0;
}

/* 请在这里填写答案 */
输入样例：
2
12345 10
12345 2

输出样例：
Test Cases 1 :
5 1
4 10
3 100
2 1000
1 10000
Test Cases 2 :
1 1
1 8
1 16
1 32
1 4096
1 8192
  */

void printBasePower (int number, int base)
{
    int _base  = 1;
    while (number != 0)
    {
        if (number != 0) printf("%d %d\n", number % base, _base);
        _base *= base;
        number /= base;
    }
}
