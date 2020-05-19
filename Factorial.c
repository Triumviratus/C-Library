
#include <stdio.h> // printf, scanf definitions
#include <math.h>
/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(void){
	
	int i; // Counter
	int n; // Number of Multiplications For Factorial
	int answer = 1; // Answer For n Factorial
	
	printf("Enter n For n Factorial: ");
	scanf("%d", &n);
	i = n;
	
	while(i >= 1){
		answer *= i;
		--i;
	}
	printf("%d factorial is %d\n", n, answer);
	return(0);
}

int main(){
	int i = 1, n = 5, answer = 1;
	while(i <= n){
		answer *= i;
		++i;
	}
	return(0);
}