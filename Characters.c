
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

int main(){
	
	char c1, c2, c3, c4, c5, c6, c7;
	int status = scanf("%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7);
	printf("\n%d %d %d %d %d %d %d\n", c1, c2, c3, c4, c5, c6, c7);
	printf("%d %d\n", EOF, status);
	if (c7 == EOF){
		printf("Hit EOF\n");
	}
	return(0);
}