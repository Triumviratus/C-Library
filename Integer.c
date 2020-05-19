
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
* This program mandates that the sum of the digits represented in
* the variable num are divisible by nine.
*------------------------------------------------------------------
*/

typedef enum {false, true} bool;

bool is_div_by_nine(int num){
	
	bool down_to_ones = false;
	int total = 0, digit;
	while(!down_to_ones){
		if (num > 9){
			digit = num % 10;
			total += digit;
			num /= 10;
		}
		else{
			total += num;
			down_to_ones = true;
		}
	}
	
	if (total%9 == 0){
		return(true);
	}
	else{
		return(false);
	}
}

int main(){
	int num = 123453;
	bool div_9 = is_div_by_nine(num);
	if (div_9){
		printf("%d is divisible by nine\n", num);
	}
	else{
		printf("%d is not divisible by nine\n", num);
	}
}
