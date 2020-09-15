//scope error
#include<stdio.h>

int func(int n)
{
    int out_Of_scope_var=1;
    return n;
}

void main()
{
    int i,n;

    func(i);

    printf("%d",out_Of_scope_var);

}
