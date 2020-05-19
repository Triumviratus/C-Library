
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(int argc, char** argv){
	double num1 = 12, num2 = 8;
	double result;
	
	result = fmod(num1, num2);
	printf("The remainder of %.0lf divided by $.0lf is %d\n", num1, num2, (int) result);
	
	if(0 <= num1 && num1 <= 5){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	int val = 1;
	while(val <= 5){
		printf("val is %d\n", val);
		val++;
	}
	return(0);
}