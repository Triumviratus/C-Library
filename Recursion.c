
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <math.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

void PrintAreaCode(char *s){
	char *ac = strtok(s, "-");
	printf("The area code of %s is %s\n", s, ac);
	return;
}

int factorial(int n){
	if (n == 1){
		return 1;
	}
	else {
		return (n * factorial(n-1));
	}
}

void printit(int 3dim[][3][4]){
	int i, j, k;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			for (k = 0; k < 4; k++){
				printf("3dim[%d][%d]: %d\n", i, j, k, 3dim[i][j][k]);
			}
		}
	}
	return;
}

typedef struct {
	int x, y;
} point_t;

int computeDistance(point_t p1, point_t p2) {
	int distance = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y), 2));
	return distance;
}

int main(void){
	char *ac;
	PrintAreaCode(ac);
	
	int n;
	factorial(n);
	
	point_t p1 = {12, 5};
	point_t p2 = {3, 2};
	int distance = computeDistance(p1, p2);
	printf("The distance between two given points is %d\n", distance);
	return(0);
}