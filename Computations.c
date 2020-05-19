
#include <stdio.h> // printf, scanf definitions
#include <math.h>
#include MAX_ITEM 8 /* Maximum Number of Items in List of Data */

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
* The purpose of this program is to compute the mean and standard
* deviation of an array of data and display the difference between
* each value and the mean.
*------------------------------------------------------------------
*/

int main(void){
	
	double x[MAX_ITEM]; // Data List
	double mean; // Mean (Average) of the Data
	double st_dev; // Standard Deviation of the Data
	double sum; // Sum of the Data
	double sum_sqr; // Sum of the Squares of the Data
	int i;
	
	printf("Enter %d numbers separated by blanks or <return>s\n", MAX_ITEM);
	for (i = 0; i < MAX_ITEM; i++){
		scanf("%lf", &x[i]);
	}
	// Compute the sum and the sum of the squares of all data.
	sum = 0;
	for (i = 0; i < MAX_ITEM; i++){
		sum += x[i];
		sum_sqr += x[i] * x[i];
	}
	// Compute and print the mean and standard deviation.
	mean = sum / MAX_ITEM;
	st_dev = sqrt((sum_sqr / MAX_ITEM) - (mean * mean));
	printf("The mean is %.2f.\n", mean);
	printf("The standard deviation is %.2f.\n", st_dev);
	
	// Display the difference between the data values and the mean.
	printf("\nTable of Differences Between Data Values and Mean\n");
	printf("Index-------Item------Difference\n");
	for (i = 0; i < MAX_ITEM; i++){
		printf("%3d%4c%9.2f%5c%9.2f\n", i, ' ', x[i], ' ', x[i] - mean);
	}
	return(0);
}