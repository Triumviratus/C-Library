
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
* Determine the value of a collection of coins.
*------------------------------------------------------------------
*/

int main(void){
	
	char first, middle, last; /* input - 3 initials 			 */
	int pennies, nickels;     /* input - count of each coin type */
	int dimes, quarters; 	  /* input - count of each coin type */
	int dollars;			  /* input - count of each coin type */
	int change;				  /* output - change amount 		 */
	int total_dollars; 		  /* output - dollar amount 		 */
	int total_cents; 		  /* total cents					 */
	
	/* Obtain and display the initials of the customer. */
	printf("Type in your three initials and press return> ");
	scanf("%c%c%c", &first, &middle, &last);
	printf("\n%c%c%c, please enter your coin information.\n", first, middle, last);
	
	/* Obtain the count of each time of coin. */
	printf("Number of $ Coins  > ");
	scanf("%d", &dollars);
	printf("Number of Quarters > ");
	scanf("%d", &quarters);
	printf("Number of Dimes    > ");
	scanf("%d", &dimes);
	printf("Number of Nickels  > ");
	scanf("%d", &nickels);
	printf("Number of Pennies  > ");
	scanf("%d", &pennies);
	
	/* Compute the total value in cents. */
	total_cents = (100 * dollars) + (25 * quarters) + (10 * dimes) + (5 * nickels) + pennies;
	
	/* Find the value in dollars and change.*/
	total_dollars = total_cents/100;
	change = total_cents % 100;
	
	/* Display the credit slip wit value in dollars and change. */
	printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n", first, middle, last, total_dollars, change);
	
	return(0);
}