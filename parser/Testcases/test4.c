// calculating cube using a function with duplicating assignment

#include <stdio.h>
int cube(int b)
{
	int b = 3;
	int cube = b * b * b;
	return cube;
}

int main()
{
	int a = 4;
	int ans = cube(a);
	printf("answer: %d", ans);

	return 0;
}