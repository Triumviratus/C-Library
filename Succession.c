
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <stdlib.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void input_calculation(int n, int* smallest, int* largest, double* average){
	int i, num, sum = 0;
	for (i = 1, i <= n; ++i){
		printf("Please input %d numbers\n", n);
		scanf("%d", &num);
		if (i == 1){
			*smallest = *largest = num;
		}
		if (num < *smallest){
			*smallest = num;
		}
		if (num > *largest){
			*largest = num;
		}
		sum += num;
	}
	*average = ((double)sum)/((double)n);
	return;
}

void add_one(int* n){
	*n = *n + 1;
}

int main(){
	int n, i, smallest, largest;
	double average;
	printf("Enter number of numbers to average: ");
	scanf("%d", &n);
	input_calculation(n, &smallest, &largest, &average);
	printf("Smallest number is %d\n", smallest);
	printf("Average of all numbers is %.2lf\n", average);
	
	int *p = malloc(sizeof(int));
	*p = 1;
	add_one(p);
	
	char *string1 = malloc(10 * sizeof(char));
	char *string2 = malloc(26 * sizeof(char));
	int i;
	for (i = 1; i <= 3; ++i){
		printf("Enter a string up to 25 characters\n");
		scanf("%s", string2);
		strncpy(string1, string2, (strlen(string2)) <= (sizeof(string1)-1) ? strlen(string2) : (sizeof(string1)-1));
		printf("string1 is %s\n", string1);
	}
	
	return(0);
}