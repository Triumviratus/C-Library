
#include <stdio.h> // printf, scanf definitions

/*
*---------------------------------------------------------------------------------------------------
* Ambrose Ryan Xavier
*---------------------------------------------------------------------------------------------------
* The output of this function is the entire function. This is a self-reproducing program, 
* which is any program that prints itself. The inclusion of [%c%s%c] accounts for characters 
* and strings as they are being printed out by the function.
*---------------------------------------------------------------------------------------------------
* As long as printf(x,34,x,34) was written as it should be, then this would be the output:
*		main(){char*x="main(){char*x=%c%s%c;printf(x,34,x,34);}";printf(x,34,x,34);}
*---------------------------------------------------------------------------------------------------
* Essentially, the (x,34,x,34) portion of code included in the first printf() statement is
* utilized for the portion of code calling characters (%c) and strings (%s). [%c] remains the
* same unless it is assigned to something. The same applies for [%s]. The [x] is utilized for
* the character and the number [34] is utilized for the length of the character. Both [x] and
* [34] are displayed twice to account for the full length of the character.
*---------------------------------------------------------------------------------------------------
*/

int main(){
	char&x = "main(){char*x=%c%s%c;printf(x,34,x,34);}"
	printf(x,34,x,34);
	printf("\n");
	return(0);
}

