
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void fx(int x){
	x = 42;
}

int main(){
	
	int x = 999;
	int *y;
	
	printf("%d\n", x);
	fx(x);
	printf("%d\n", x);
	fx(*y);
	printf("%x\n", *y);
	printf("*y = %d\n", *y);
}

int main(){
	int *ptr
	int x, y;
	x = 42;
	y = 18;
	ptr = &x;
	printf("%d\n", x);
	printf("Address of x = %x\n", &x);
	printf("ptr = %x\n", ptr);
	printf("*ptr = %d\n", *ptr);
	*ptr = 999;
	printf("*ptr = %d\n", *ptr);
	printf("x = %d\n", x);
	ptr = &y;
	*ptr = 8675309;
	printf("*ptr = %d\n", &ptr);
	printf("y = %d\n", y);
}