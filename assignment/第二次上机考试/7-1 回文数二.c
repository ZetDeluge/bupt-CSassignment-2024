/*输入任意整数，设计一个回文数判定算法，判定并输出该数是否为回文数？

输入格式:
只有一行，为两个用空格分隔的正整数num及len。它们分别代表输入的整数及其长度（0<len<10）。

输出格式:
前边若干行按比较顺序依次输出每行为参与比较的两个数（中间有一个空格），高位在前，低位在后。如果len为奇数，最后一次只有一个数字时，则将该数字输出2次。如果没有比较完就已知道不是回文数，要停止比较，后边的比较过程没有了，也就没有相应的输出。
最后一行：如果是回文数则输出Yes，否则输出No。

输入样例一:
121 3

输出样例一:
1 1
2 2
Yes

输入样例二:
1234 4

输出样例二:
1 4
No
  */

#include <stdio.h>

int reverse (int i)
{
  int res = 0, tmp = i;
  while (tmp != 0)
    {
      res = tmp % 10 + res * 10;
      tmp /= 10;
    }
  return res;
}

int main()
{
    int num, len;
    scanf("%d%d", &num, &len);
    int rev = reverse(num);
    for (int i = 0; i < (len + 1) / 2; i ++)
    {
        int a = rev % 10;
        int b = num % 10;
        rev /= 10;
        num /= 10;
        printf("%d %d",a, b);
        if (a != b) 
        {
          printf("No");
          return 0;
        }
    }
    printf{"Yes"};
    return 0;
}
