//error test for function return mismatch
#include<stdio.h>

void Void_func_with_return(int a)
{
    int abc=1;
    return a;
}

void main()
{
    int i,n;

    Void_func_with_return(i);

    printf("%d",i)

}
