//PASS CASE: Simple variable naming and initialisations.
#include<stdio.h>

int main()
{	
	int var1;
	int v2 = 12;
	int c3 = 1;
	if(var1+v2<c3){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	var1 = v2 + c3;
	printf("%d",var1);

	v2--;
}
