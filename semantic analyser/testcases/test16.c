#include<stdio.h>
//Error case that doesn't handle int to float conversion.
void main()
{
    int a = 3;
    int b = 12; 
    float c=0.0;
    c = a + b;
}