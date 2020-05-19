
#include <stdio.h> // printf, scanf definitions
#include <string.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int fibonacci(int n){
	printf("In function with n = %d\n", n);
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}

int main(){
	printf("The answer for the sixth element in the Fibonacci sequence is %d.\n", fibonacci(6));
	
	int i = 6, j = 7;
	int *ptr1, *ptr2;
	ptr1 = &i;
	ptr2 = &j;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	printf("%d %d\n%d %d\n", i, *ptr1, j, *ptr2);
	
	int m = 10, n = 5;
	int *mp, *np;
	mp = &m;
	np = &n;
	*mp = *mp + *np;
	*np = *mp - *np;
	printf("%d %d\n%d %d\n", m, *mp, n, *np);
	
	char *x = "123", *y = "456";
	if (strcmp(x,y,) == 0){
		printf("Strings %s and %s are equal\n", x, y);
	}
	else {
		printf("Strings %s and %s are not equal\n", x, y);
	}
	return(0);
}