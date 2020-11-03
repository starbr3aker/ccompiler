//ERROR CASE: Void function returns a value. Array dimensions don't match. 
#include <stdio.h>

void fubar(int a, int b)
{
	return 0; //Second error
}

int main()
{
	int z[4][3];
	
	
	int b = z[3]; //First error

	fubar(5,2);
	

	return 0;
}