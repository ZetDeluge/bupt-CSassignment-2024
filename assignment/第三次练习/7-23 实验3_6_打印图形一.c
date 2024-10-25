/*用’-‘(减号)、’+’(加号)、’|’(竖线)、’*’星号和空格打印方格。

输入格式:
只有一行，为用空格分隔的两个整数l,c（0<l,c<10）。其中l和c分别代表格子的行数和列数。请看输入样例。

输出格式:
每组测试用例输出一组（请看输出样例）。

输入样例:
2 3

输出样例:
|*****|*****|*****|
|  |  |  |  |  |  |
|--+--|--+--|--+--|
|  |  |  |  |  |  |
|*****|*****|*****|
|  |  |  |  |  |  |
|--+--|--+--|--+--|
|  |  |  |  |  |  |
|*****|*****|*****|
  */


//reference: https://blog.csdn.net/weixin_62495164/article/details/121729520
//reference个鬼啦抄作业就直说（（
#include<stdio.h>
void one(int n,int j)
{
  printf("|*****");
  if(j==n-1)
  printf("|\n");
}

void two(int n,int j)
{
  printf("|  |  ");
  if(j==n-1)
  printf("|\n");
}

void three(int n,int j)
{
  printf("|--+--");
  if(j==n-1)
  printf("|\n");
}

int main()
{
  void one(int n,int j);
  void two(int n,int j);
  void three(int n,int j);
  int m,n;
  scanf("%d %d",&m,&n);
  int i,j,k;
  for(i=0;i<=m;i++)
  {
    for(k=0;k<4;k++)
    {
      for(j=0;j<n;j++)
      {
        if(k==0)
        {
          one(n,j);
        }
        else if((k==1||k==3)&&i<m)
        {
          two(n,j);
        }
        else if(k==2&&i<m)
        {
          three(n,j);
        }
      }
    }
  }
return 0;
}
