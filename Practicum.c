
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int counter;
int value = 0;

printf("Variable Value Is Uninitialized\n");
for (counter = 1; counter <= 50; counter++) {
	value = value + counter;
	if (value > 25){
		printf("value is %d\n", value);
	}
}

while (counter <= 50){
	value = value + counter;
	if (value > 25){
		printf("value is %d\n", value);
	}
	counter++;
}

printf("Done\n");

if (x == 1){
	printf("a");
}
else if (x == 2){
	printf("b");
}
else {
	printf("c");
}

char convert_char(){
	char lletter, uletter, newline;
	print("Enter lowercase letter between a and d: ");
	scanf("%c", &lletter);
	scanf("%c", newline); // to obtain newline
	
	switch(lletter){
		case 'a':
			uletter = 'A';
			break;
		case 'b':
			uletter = 'B';
			break;
		case 'c':
			uletter = 'C';
			break;
		case 'd':
			uletter = 'D';
			break;
		default:
			uletter = 'U';
	}
	return(uletter);
}

char place[12] = "New York City, New York";
char *city, *state;

void PrintCityState(){
	char place_copy[12];
	strcpy(place_copy, place);
	city = strtok(place_copy, ",");
	state = strtok(NULL, ",");
	printf("city is %s, state is %s\n", city, state);
	return;
}

int m = 19, n = 13;
int *mp, *np;
mp = &m;
np = &n;
*mp = *mp + *np;
*np = *mp - *np;
printf("%d%d\n%d%d\n", m, *mp, n, *np);

int func(int n){
	if (n == 0){
		return 1;
	}
	else {
		return (n*func(n-1));
	}
}

int main(){
	printf("answer is %d\n", func(4));
}

typedef struct {
	int numer;
	int denom;
} fraction_t;

void print_fraction(fraction_t *fr){
	scanf("d/%d\n", &(*fr).numer, &(*fr).denom);
	scanf("%d/%d\n", &fr->numer, &fr->denom);
}

char str[50];
char dupstr[50];
scanf("%s", str);
strcpy(dupstr, str);

int main(){
	int squared[5];
	int i, sum = 0;
	for (i = 0; i < 5; ++i){
		squared[i] = i*i;
		sum += squared[i];
	}
	printf("sum is %d\n", sum);
	return(0);
}

void print_arr(int arr[][2][3], int first, int second, int third){
	int i, j, k;
	for (i = 0; i < first; ++i){
		for (j = 0; j < second; ++j){
			for (k = 0; k < third; ++k){
				printf("arr[%d][%d][%d] is %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	return;
}

void print_arr(int arr[2][2][3], int first, int second, int third){
	int i, j, k;
	for (i = 0; i < first; ++i){
		for (j = 0; j < second; ++j){
			for (k = 0; k < third; ++k){
				printf("arr[%d][%d][%d] is %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	return;
}

typedef struct {
	char* name;
	int grades[5];
} student_t;

void CalculateAvg(student_t s){
	double avg = 0.0;
	int i;
	for (i = 0; i < 5; ++i){
		avg += s.grades[i];
	}
	avg = (double)avg/5;
	printf("Student %s has grade point average %lf\n", s.name, avg);
	return;
}

int main(){
	student_t s = {"Ambrose Ryan Xavier", {91, 92, 93, 94, 95}};
	CalculateAvg(s);
	return(0);
}