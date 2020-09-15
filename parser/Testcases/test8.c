// passing wrong parameters to a function

#include <stdio.h>

int callme(int x)
{
    return x;
}

void main()
{
    int a = 1, b = 2;

    callme(a, b);
    return a;
}
