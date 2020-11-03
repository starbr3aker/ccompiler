//Redeclaration of x
#include<stdio.h>
int divfunc(int x, int y)
{
	int x = 2,z;
    z=x/y;
	return x;
}

int main()
{
	int m = 8,n;
	divfunc(m,n);
	printf("HelloWorld!");

	return 0;
}