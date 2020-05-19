
#include <stdio.h> // printf, scanf definitions
#define KMS_PER_MILE 1.609 // Conversion Constant
#define CUPS_TO_OZ 8 // Conversion Constant

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(int argc, char** argv){
	
	double miles; // Distance In Miles
	double kms; // Equivalent Distance In Kilometers
	
	// Obtain the distance in miles.
	printf("Enter the distance in miles: ");
	scanf("%lf", &miles);
	
	// Convert the distance to kilometers.
	kms = KMS_PER_MILE * miles;
	
	// Display the distance in kilometers.
	printf("%lf miles equals %lf kilometers.\n", miles, kms);
	
	int cups; // Amount In Cups
	int ounces; // Equivalent Amount In Ounces
	
	// Read in the number of cups to convert.
	printf("Enter the number of cups to convert: ");
	scanf("%d", &cups);
	
	// Convert the amount to ounces.
	ounces = CUPS_TO_OZ * cups;
	
	// Display the amount in ounces.
	printf("%d cups equals %d ounces\n", cups, ounces);
	return(0);
}