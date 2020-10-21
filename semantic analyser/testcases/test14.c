
#include<stdio.h>
//fail test for return type of function
void function(int a, float b)
{
    return;
}

void main()
{
    int i,n;
    float x;
    function(i,x);

}
