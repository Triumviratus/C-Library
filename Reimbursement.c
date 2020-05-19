
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

double compute_miles_cost(int start, int end, double cost_miles){
	double reim;
	reim = (end - start) * cost_mile;
	return reim;
	return (end - start) * cost_mile;
}

int main(){
	
	int start_odom = 1000, end_odom = 1200;
	double cost_per_mile = 0.35;
	double reimbursement = compute_miles_cost(start_odom, end_odom, cost_per_mile);
	printf("The calculated reimbursement is %lf\n", reimbursement);
}