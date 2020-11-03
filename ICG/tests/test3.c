// VALID CASE
#include<stdio.h>

void main()
{
	int x = 10;
	while(x>0)
	{
		printf("--Example code--");
		x--;
	}

	x=8;
	do
	{
		int m;
		m =  4;
		while(m>0)
		{
			int res = x-m;
			printf("%d", res);
			m--;
		}
        printf("%d",x);
        x--;
	}while(x>4);
}