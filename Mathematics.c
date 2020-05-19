
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void half(int);

int square(int num_to_square){
	return num_to_square * num_to_square;
}

void half(int num_to_half){
	double n_to_h = (double) (num_to_half/2);
	printf("Half of %d is %.2lf\n", num_to_half, n_to_h);
	return;
}

int main(){
	int squared_num = square(5);
	half(8);
	return(0);
}