#include<stdio.h>

int factorial (int num)
{

  if (num <= 1)
    return num;
  else
    return factorial (num - 1) * num;
}

int main ()
{
  int res = factorial (5);
  printf ("%d", res);
  return 0;
}
