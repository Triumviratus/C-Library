
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void print(double number){
	double a = 123.4567;
	printf("The value of a is %.2lf\n", number);
	return;
}

int main(){
	int num, count, mult = 1;
	printf("Enter a Positive Integer: ");
	scanf("%d", &num);
	
	for (count = 1; count <= num; ++ count){
		mult *= count;
	}
	
	printf("Mult = %d\n", mult);
	
	double a = 123.4567;
	printf("The value of a is %10.lf\n", a);
	
	double number = 123.4567;
	print(number);
	
	return(0);
}