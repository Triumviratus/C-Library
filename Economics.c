
#include <stdio.h> // printf, scanf definitions
#include <math.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

double payment(double principal, double interest, int no_payments){
	
	// Compute payment as (interest * principal)/(1-((1+interest) to the -n power))
	
	double pay, part1_eq, divisor, numerator;
	
	numerator = interest * principal;
	divisor = no_payments * (-1.0);
	part1_eq = pow((1.0 + interest), divisor);
	pay = numerator/(1.0 - part1_eq);
	
	return pay;
}

int main(int argc, char** argv){
	
	double price, down_payment, annual_interest_rate;
	int no_payments;
	
	printf("Enter Purchase Price: ");
	scanf("%lf", &price);
	
	printf("Enter Down Payment: ");
	scanf("%lf", &down_payment);
	
	printf("Enter Annual Interest Rate: ");
	scanf("%lf", &annual_interest_rate);
	
	printf("Enter Number of Payments: ");
	scanf("%d", &no_payments);
	
	printf("Amount Borrowed Is $%.2lf\n", price - down_payment);
	printf("Monthly Payment Is $%.2lf\n", payment(price - down_payment, annual_interest_rate/12, no_payments));
}