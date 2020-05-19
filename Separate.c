
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void separate(double, char*, int*, double*);

void separate(double num, char* signp, int* wholep, double* fracp){
	double magnitude;
	if (num < 0){
		*signp = '-';
	}
	else if (num == 0){
		*signp = ' ';
	}
	else {
		*signp = '+';
	}
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;
}

int main(void){
	double value; // Number to Analyze
	char sn; // Sign of the Value
	int whl; // Whole Number Magnitude of Value
	double fr; // Fractional Part of Value
	
	printf("Enter a value to analyze: ");
	scanf("%lf", &value);
	
	separate(value, &sn, &whl, &fr);
	printf("Parts of %.4f\n sign: %c\n", value, sn);
	printf("Whole number magnitude: %d\n", whl);
	printf("Fractional part: %.4f\n", fr);
	
	int m = 10; n = 5;
	int *mp, *np;
	mp = &m;
	np = &n;
	*mp = *mp + *np;
	*np = *mp - *np;
	printf("%d %d\n%d %d\n", m, *mp, n, *np);
	
	char c1, c2, c3;
	printf("This is a test\n");
	printf("\t\tThis is a test\n");
	printf("This is a test \b\b\b");
	scanf("%c%c%c", &c1, &c2, &c3);
	printf("\nprint a %c%%\n", c1);
	return(0);
}