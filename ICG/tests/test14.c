//PASS CASE: multiple function calls

#include<stdio.h>

int funct()
{
  return 1;
}
int myfunc(int a, char b)
{
    return a;
}

void main()
{
  int i;
  char n;
  double s;
  int x= funct();
  printf("\n");
  myfunc(i,n);
}
