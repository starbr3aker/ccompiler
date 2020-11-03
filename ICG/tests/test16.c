//ERROR CASE: Unresolvable types are added, array dimension resolved too far.
#include<stdio.h>

void main()
{
    int i=3,n=6;
    float a=0.0;
    a = i+n; //First Error

    int b[4][2];
    b[2][3][4][12][21]; //Second error.
}
