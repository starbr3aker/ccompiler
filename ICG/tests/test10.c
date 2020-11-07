// FAIL case: Type mismatch in function parameters passed
#include<stdio.h>

int myfunc(int a, char b)
{
		int i=0;
		i++;
    return a;
}

void main()
{
    int i;
    char n;
    double s;
    myfunc(i,s);
}
