
#include <stdio.h> // printf, scanf definitions

/*
*--------------------------------------------------------------------
* Ambrose Ryan Xavier
*--------------------------------------------------------------------
* Write a program that will find the smallest, largest, and average
* values in a collection of N numbers. Obtain the value of N before
* scanning each value in the collection of N numbers.
*--------------------------------------------------------------------
* average() asks for a number of inputs, determines the smallest
* and largest values, and calculates the average. The int main(void)
* function calls the average() function and then terminates.
*--------------------------------------------------------------------
*/

void average(){
	
	double N = 0;
	double n = 0; // Numbers Within Numbers
	double S = 0; // Smallest Value
	double L = 0; // Largest Value
	double A = 0; // Average Value
	double T = 0; // Total of N Numbers
	int i = 0;
	
	// Read in the value entered for N.
	printf("Enter the value for N: ");
	scan("%lf", &N);
	
	for(i; i < N; i++){
		printf("Enter %d: ", (i+1));
		scanf("%lf", &n);
		// The total of N numbers stores the input.
		T = T + n;
		
		// Save the smallest (S) and largest (L) numbers as the maximum and minimum values.
		if(i == 0){
			S = n;
			L = n;
		}
		
		// Determine if the minimum value is greater than the current number.
		if(S > n){
			S = n;
		}
		
		// Determine if the maximum value is less than the current number.
		else if(L < n){
			L = n;
		}
	}
	// Divide the total (T) by the number (N) to attain the average (A).
	A = T/N;
	printf("The smallest number in N is %lf\n", S);
	printf("The largest number in N is %lf\n", L);
	printf("The average of N is %lf\n", A);
}

int main(void){
	average();
	return(0);
}