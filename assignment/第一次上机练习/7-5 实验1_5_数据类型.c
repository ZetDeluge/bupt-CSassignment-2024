/*C语言为程序员提供了丰富的数据类型，常用到的数据类型有字符型(char 型)、短整型(short 型)、整型(int 型)、长整型(long 型)、拓展长整型(long long 型)、单精度浮点型(float 型)、双精度浮点型(double 型)。你的任务是在主程序中分别定义上述的所有类型变量，变量名按照上述顺序为a、b、c、d、e、f、g。按照上述顺序读入这些不同类型的数据，并按照原顺序输出。最后再输出这些变量在你所用的操作系统中所占的字节数，这里要用到计算变量占用内存字节数的运算符sizeof()。
提示：
短整型的定义：short b;
短整型变量的输入：scanf(“%hd”,&b);
短整型变量的输出：printf(“%hd”,b);
长整型变量的定义：long d;
长整型变量的输入：scanf(“%ld”,&d);
长整型变量的输出：printf(“%ld”,d);
long long 型变量的定义：long long e;
long long 型变量的输入：scanf(“%lld”,&e);
long long 型变量的输出：printf(“%lld”,e);
sizeof()的用法：
假如我们想知道在操作系统中，一个int型变量所占的内存空间为多少字节，则用以下代码：
int a=0;
printf(“%zu\n”,sizeof(a));
或者
printf(“%zu\n”,sizeof(int));。
注意：
1、在某些非ANSI C标准的编译器下，很可能不支持long long数据类型，如VC6.0，但VS2003以上版本均支持。
2、我们给出的样例是在64位的linux（判题服务器的操作系统）下运行的结果，在其他环境下有可能不同。即使操作系统及看到的结果都不同，只要你的程序写的对，就一定会通过。
3、输出的文本均为ascii字符，像单引号这一类字符要特别注意不要输出中文字符。
输入格式:
为7行，每行对应一种类型数据的输入。
输出格式:
也是7行，每行对应一种类型的数据及其在内存在占用的字节数。如“The ‘int’ variable is 2000000000, it takes 4 byte.”。
输入样例:
X
1234
2000000000
2000000000
500000000000000
1.2345
9.87654321

输出样例:
The 'char' variable is X, it takes 1 byte.
The 'short' variable is 1234, it takes 2 bytes.
The 'int' variable is 2000000000, it takes 4 bytes.
The 'long' variable is 2000000000, it takes 8 bytes.
The 'long long' variable is 500000000000000, it takes 8 bytes.
The 'float' variable is 1.234500, it takes 4 bytes.
The 'double' variable is 9.876543, it takes 8 bytes.*/

#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    printf("The 'char' variable is %c, it takes %zu byte.\n", a, sizeof(a));
    short b;
    scanf("%hd",&b);
    printf("The 'short' variable is %hd, it takes %zu bytes.\n", b, sizeof(b));
    int c;
    scanf("%d",&c);
    printf("The 'int' variable is %d, it takes %zu bytes.\n", c, sizeof(c));
    long d;
    scanf("%ld",&d);
    printf("The 'long' variable is %ld, it takes %zu bytes.\n", d, sizeof(d));
    long long e;
    scanf("%lld",&e);
    printf("The 'long long' variable is %lld, it takes %zu bytes.\n", e, sizeof(e));
    float f;
    scanf("%f",&f);
    printf("The 'float' variable is %f, it takes %zu bytes.\n", f, sizeof(f));
    double g;
    scanf("%lf",&g);
    printf("The 'double' variable is %lf, it takes %zu bytes.\n", g, sizeof(g));
    return 0;
}
