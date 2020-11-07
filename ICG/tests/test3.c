// VALID CASE
#include<stdio.h>

int main()
{
	int x = 10;
	while(x>0)
	{
		printf("--Example code--");
		x--;
	}

	x=2;
	while(x>0)
	{
		int m;
		m =  8;
		int res = x-m;
		while(m>0)
		{
			printf("%d",res );
			m--;
		}
        printf("%d",x);
        x--;

	}
}