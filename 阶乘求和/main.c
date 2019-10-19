//0! + 1! + 2！+ … 
//以n = 4为例
//  4！+ 3！+ 2！+ 1！+ 0！
//= (4+1)*3! + 2! + 1! + 0!
//= ((4+1)*3 + 1)*2! + 1! + 0!
//= (((4+1)*3 + 1)*2 + 1)*1! + 0!
//= ((((4+1)*3 + 1)*2 + 1)*1 + 1)*0! = ((((4+1)*3 + 1)*2 + 1)*1 + 1)*1

#include<stdio.h>

int main()
{
  int n = 5;
  long long s = 1;//8字节
  for(; n >= 1; --n)
    s = (1 + n*s);
  printf("%lld", s);
  return 0;
}

//1! + 2！+ 3！+ ……

int main()
{
  long long sum = 0, tmp = 1;
  int N = 5;
  for(int i = 1; i <= N; ++i)
  {
    tmp = tmp * i;
    sum = sum + tmp;
  }
  printf("%lld", sum);
  return 0;
}

//递归
long long f(int n)
{
  if(n == 0 || n == 1)
    return 1;
  else 
    return n * f(n-1);
}

int main()
{
  int n = 5;
  long long sum = 0;
  for(int i = 1; i <= n; ++i)
    sum = sum + f(i);
  printf("%lld\n", sum);
  return 0;
}
