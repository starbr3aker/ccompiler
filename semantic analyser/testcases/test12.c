#include <stdio.h>
//Error case to demonstrate return on void function
void foobar(int a, int b)
{
	return a;
}

int main()
{
	int z = 5;
	foobar(5,z,z);
	return 0;
}