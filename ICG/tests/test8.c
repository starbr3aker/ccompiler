//PASS CASE: Array dimension pass. The compiler doesn't support directly printing the value, from array. So we used intermediate variable. 
#include <stdio.h>

void main()
{
	int a[3][13][12][7];
	int b = a[1][2][3][4];
	printf("%d", b);

}
