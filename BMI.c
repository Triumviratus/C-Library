
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void weight_status (int w, int h){
	
	double bmi = (703 * w)/(pow(h, 2));
	if (bmi < 18.5){
		printf("Underweight\n");
	}
	else if (18.5 <= bmi && bmi <= 24.9){
		printf("Normal\n");
	}
	else if (25.0 <= bmi && bmi <= 29.9){
		printf("Overweight\n");
	}
	else{
		printf("Obese\n");
	}
	return;
}

int main(){
	int weight = 200, height = 72;
	weight_status(weight, height);
}