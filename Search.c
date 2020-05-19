
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>
#define END 0

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef enum {false, true} bool;

Bool is_even(unsigned int);
Bool is_odd(unsigned int);

Bool is_even(unsigned int n){
	Bool answer;
	if (n == 0){
		return true;
	}
	else {
		answer = is_odd(n-1);
	}
	return answer;
}

Bool is_odd(unsigned int n){
	Bool answer;
	if (n == 0){
		answer = false;
	}
	else {
		answer = is_even(n-1);
	}
	return answer;
}

bool search(int* array, int num_to_find){
	bool found = false;
	int i = 0;
	while(!found && array[i] != END){
		if (array[i] == num_to_find){
			found = true;
		}
		else {
			++i;
		}
	}
	return found;
}

int main(int argc, char** argv){
	int array[] = {44, 11, 66, 22, 15, 78, 0};
	bool found = search(array, 11);
	printf("11 was %sfound\n", (found ? "" : "not "));
	found = search(array, 12);
	printf("12 was %sfound\n", (found ? "" : "not "));
	
	char* month_array[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int month = 3;
	int day = 5;
	int year = 2018;
	char *str1 = malloc(30 * sizeof(char));
	char *str2 = malloc(30 * sizeof(char));
	sprintf(str1, "%d/%d/%d", month, day, year);
	sprintf(str2, "%s/%d/%d", month_array[month-1], day, year);
	printf("Calendar Date 1 is $s\n and Calendar Date 2 is %s\n", str1, str2);
	
	int x;
	int *p;
	printf("Size of x is %d and size of p is %d\n", sizeof(x), sizeof(p));
	
	double num;
	char* str = malloc(80 * sizeof(char));
	
	printf("Enter a floating point number: ");
	scanf("%s", str);
	sscanf(str, "%lf", &num);
	printf("The number is %lf\n", num);
	
	int num2;
	printf("argc is %d\n", argc);
	if (argc != 2){
		printf("Incorrect Number of Arguments\n");
		return(1);
	}
	else {
		sscanf(argv[argc-1], "%d", &num2);
		printf("num is %d\n", num2);
		if (num2 < 0){
			printf("Number Must Not Be Negative\n");
			return(1);
		}
		printf("%d is %s even\n", num2 (is_even(num) ? "" : "not "));
		return(0);
	}
	
	return(0);
}