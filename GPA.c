
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*------------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------------
* The compute_grade_avg function not only initializes the variables,
* but also provides the framework for calculating the N entered grades.
*------------------------------------------------------------------------
* The write_grade_msg function determines whether the calculated average
* of the grades meets one of the standards outlined.
*------------------------------------------------------------------------
* The main function calls both previous functions in order to output
* the results.
*------------------------------------------------------------------------
*/

double compute_grade_avg(){
	int sum = 0;
	int add = 0;
	double avg = 0;
	int i;
	
	/*
	* This loop has an upper limit established at 5, consistent with the 
	* requirement of inputting five grades to calculate the average.
	*/
	
	for (int = 1; i <= 5; i++){
		printf("Enter Grade: ");
		scanf("%d", &add);
		sum = sum + add;
	}
	
	avg = sum/5.0;
	
	/*
	* N represents the number of grades to enter. The printf and scanf
	* features ask the utilizer what N is going to be, and the array
	* will be featured as grades[N].
	*/
	
	int N;
	printf("Number of Grades N to Enter: ");
	scanf("%d", &N);
	int grades[N];
	
	/*
	* This loop has an upper limit established at N, consistent with
	* the requirement of inputting N grades to calculate the average.
	*/
	
	for(i = 0; i < N; i++){
		printf("\nEnter Grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	
	/*
	* This loop calculates the average by dividing
	* the sum by whatever N is going to be.
	*/
	
	for(i = 0; i < N; i++){
		sum = sum + grades[i];
	}
	
	avg = ((double) sum)/((double) N);
	
	/*
	* The ceil function (Ceiling) returns the smallest integer that is 
	* greater than or equal to the assigned variable (avg in this case)
	* (i.e., round up to the nearest integer).
	*/
	
	avg = ceil(avg);
	printf("Your grade point average is %.1lf\n", avg);
	return(avg);
}

double write_grade_msg(double grade){
	
	if (grade < 60){
		printf("Failed Semester -- Registration Suspended.\n");
	}
	// The && feature is utilized to represent 60 <= grade <= 69
	else if (60 <= grade && grade <= 69){
		printf("On Probation For Next Semester.\n");
	}
	// The && feature is utilized to represent 70 <= grade <= 79
	else if (70 <= grade && grade <= 79){
		printf("No Message.\n");
	}
	// The && feature is utilized to represent 80 <= grade <= 89
	else if (80 <= grade && grade <= 89){
		printf("Dean's List For The Semester.\n");
	}
	// The && feature is utilized to represent 90 <= grade <= 100
	else if (90 <= grade && grade <= 100){
		printf("Highest Honors For The Semester.\n");
	}
}

int main(void){
	double grade = compute_grade_avg();
	write_grade_msg(grade);
}