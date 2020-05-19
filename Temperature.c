
#include <stdio.h> // printf, scanf definitions
#define C2F * 1.8 + 32

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
* The Formula for Celsius (C) to Fahrenheit (F) is F = (1.8)C + 32
*------------------------------------------------------------------
*/

int main(int argc, char** argv){
	
	double celsius; // Temperature in Degrees Celsius (C) To Be Read In
	double fahrenheit; // Temperature in Degrees Fahrenheit (F) To Be Converted From Degrees Celsius (C)
	
	// Read In The Temperature In Degrees Celsius (C) to Convert to Degrees Fahrenheit (F)
	printf("Enter The Temperature In Degrees Celsius: ");
	scanf("%lf", &celsius);
	
	// Convert The Temperature In Degrees Celsius (C) to Degrees Fahrenheit (F)
	fahrenheit = celsius C2F;
	
	// Display The Temperature In Degrees Fahrenheit (F)
	printf("%.1lf Degrees Celsius (C) Equals %.1lf Degrees Fahrenheit (F)\n", celsius, fahrenheit);
	return(0);
}

