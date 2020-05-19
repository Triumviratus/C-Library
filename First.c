
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>

/*
*----------------------------------------------------------------------
* Ambrose Ryan Xavier
*----------------------------------------------------------------------
* Write a program that takes a word that is less than 25 characters
* long and prints a statement that states which letter the given
* word starts with.
*----------------------------------------------------------------------
*/

int sum(int a[][4]){
	int i, j, sum = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			sum += a[i][j];
		}
	}
	return sum;
}

int main(){
	char* word = malloc (26 * sizeof(char));
	printf("Enter a Word: ");
	scanf("%s", word);
	printf("%s starts with the letter %c\n", word, word[0]);
	
	int a[3][4] = {{1,1,0,2},{2,0,0,3},{3,2,0,4}};
	int total = sum(a);
	printf("total is %d\n", total);
	return(0);
}