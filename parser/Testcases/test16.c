//test for all loops
#include<stdio.h>

int main()
{
    int a=0;
    for (a = 0; a < 10; a++)
        {
        	printf("Hell0");
        }
    
    while(a>0) {
        a-=2;
        printf("world");
    }

    do {
        a+=5;
        printf("Goodbye");
    }while(b<10);

    return 0;
}