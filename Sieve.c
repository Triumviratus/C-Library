
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------------
*/

typedef struct IntList {
	int value; // 1
	struct IntList *next; // 2
} *INTLIST, INTCELL; // 3

INTLIST sieve (int upper_bound /*4*/) {
	INTLIST prime_list = NULL; // 5
	INTLIST cursor; // 6
	int candidate; // 7
	int is_prime; // 8
	for (candidate = 2 /*9*/; candidate <= upper_bound /*10*/; candidate++ /*11*/){
		is_prime = 1; // 12
		for (cursor = prime_list /*13*/; cursor /*14*/; cursor = cursor->next /*15*/){
			if (candidate % cursor->value == 0 /*16*/){
				is_prime = 0; // 17
				break; // 18
			}
		}
		if (is_prime /*19*/){
			cursor = (INTLIST) malloc (size of (INTCELL)); // 20
			cursor->value = candidate; // 21
			cursor->next = prime_list; // 22
			prime_list = cursor; // 23
		}
	}
	return prime_list; // 24
}