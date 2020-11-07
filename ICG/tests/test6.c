//FAIL CASE: number of parameters in function call
#include<stdio.h>

int myfunc(int a, char b)
{
    return a;
}

void main()
{
    int i;
    char n;
    double s;
    printf("\n");
    myfunc(i,n,s);
}
