#include<stdio.h>

//correct test for better scope understanding with multiple while loops
//will cause an infinite loop during run time

int main()
{
	int n = 5;
	while(n>0)
	{
		printf("Hello world");
		n--;
	}

	n=4;
	while(n>0)
	{
		printf("%d",n);
		n--;
		int b;
		b= 4;
		while(b>0)
		{
			printf("%d", a*b);
			b--;
		}
	}
	return n;
}
