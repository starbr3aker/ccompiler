//Line 13:Number of arguments passed to myfunc exceeds requirement
#include<stdio.h>

int myfunc(int a)
{
    return a;
}

void main()
{
    int i,n;

    myfunc(i,n);
    
}