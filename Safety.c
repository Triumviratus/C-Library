
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(int argc, char** argv){
	
	int velocity;
	double fine;
	
	printf("Enter Velocity: ");
	scanf("%d", &velocity);
	
	if (velocity > 35){
		fine = 20.0;
	}
	else if (velocity > 50){
		fine = 40.0;
	}
	else if (velocity > 75){
		fine = 60.0;
	}
	printf("Fine Is %.2lf\n", fine);
	return(0);
}