// function calling another function


#include <stdio.h>

void func2(int n){
	int b = 20;
	printf("Function 2 %d",b);
}
void func1(int n)
{
	int a =10;
	printf("Function 1 %d",a);
	fun2(0);
}

void main()
{
	func1(0);
}
