
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(void){
	
	char grade = 'A';
	int points;
	
	switch(grade){
	case 'A':
		points = 4;
		break;
	case 'B':
		points = 3;
		break;
	case 'C':
		points = 2;
		break;
	case 'D':
		points = 1;
		break;
	case 'F':
	case 'I':
	case 'W':
		points = -1;
	}
	printf("Points: %d\n", points):
	return(0);
}
