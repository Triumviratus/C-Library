
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int count(char* str, char c){
	int num;
	if (str[0] == '\0'){
		num = 0;
	}
	else {
		if (c == str[0]){
			num = 1 + count(&str[1], c);
		}
		else {
			num = count(&str[1], c);
		}
	}
	return num;
}

int multiply(int m, int n){
	int answer;
	printf("In multiplication, m is %d, n is %d\n", m, n);
	if (n == 1){
		answer = m;
	}
	else {
		answer = m + multiply(m, n-1);
	}
	return answer;
}

void myFunction(int *arr, int len){
	int x;
	for (x = 0; x < len; x++){
		printf("Value of array element %d is: %d\n", x, *arr);
		++arr;
	}
}

int main(int argc, char** argv){
	char *last, *middle, *first;
	char lead[30] = "Xavier, Ambrose Ryan";
	char lead_copy[30];
	strcpy(lead_copy, lead);
	
	last = strtok(lead_copy, ", ");
	first = strtok(NULL, ", ");
	middle = strtok(NULL, ", ");
	printf("last is %s, first is %s, middle is %s\n", last, first, middle);
	
	int a[30] = {1};
	printf("a[0] = %d, a[1] = %d, a[20] = %d\n", a[0], a[1], a[20]);
	
	int numchars;
	if (argc != 3){
		printf("Incorrect Number of Arguments\n");
		return(1);
	}
	numchars = count(argv[1], argv[2][0]);
	printf("The number of times %c appears in %s is %d\n", argv[2][0], argv[1], numchars);
	
	int n = 151;
	int *p = &n;
	printf("n is %d\n", n);
	printf("The value that p is pointing to is %d\n", *p);
	printf("The memory address of n is %p\n", &n);
	printf("The value of p is %p\n", p);
	printf("The memory address of p is %p\n", &p);
	
	int x = 5;
	int *p = &x;
	int **q = &p;
	printf("%d %d %d\n", x, *p, **q);
	printf("%p %p %p\n", &x, p, *q);
	printf("%x %x %x\n", &x, p, *q);
	
	printf("The multiplicative product of 6 and 4 is %d\n", multiply(6, 4));
	
	int array[] = {11, 22, 33, 44, 55, 66, 77};
	myFunction(array, 7);
	
	return(0);
}