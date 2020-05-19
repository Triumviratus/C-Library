
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*----------------------------------------------------------------------------
* Ambrose Ryan Xavier
*----------------------------------------------------------------------------
* The get_next sequence function retrieves the next value in the sequence.
*----------------------------------------------------------------------------
* Call the get_next function to retrieve X1 and continue the function calls
* until you have a value for X5. Pass the final value X5 to the print_result
* function to complete the program.
*----------------------------------------------------------------------------
*/

double get_next(int n, int prev_x){
	// x_n = (2^(n-1) * 3) + x_(n-1)
	int cur_x;
	cur_x = ((int) (pow(2, n-1)*3)) + prev_x;
	return cur_x;
}

void print_result(int result){
	// Print the result of the sequence.
	printf("The number requested in the sequence is %d\n", result);
	return;
}

int main(int argc, char** argv){
	
	int X1, X2, X3, X4, X5, index = 1;
	
	// The first value in the sequence takes in n = 1 and prev_x = 0
	X1 = get_next(index++, 0);
	// The second value takes in n = 2 and prev_x = X1
	X2 = get_next(index++, X1);
	// The third value takes in n = 3 and prev_x = X2
	X3 = get_next(index++, X2);
	// The fourth value takes in n = 4 and prev_x = X3
	X4 = get_next(index++, X3);
	// The fifth value takes in n = 5 and prev_x = X4
	X5 = get_next(index, X4);
	
	// Call the print_result function to print the fifth term in the sequence (X5).
	print_result(X5);
	return(0);
}