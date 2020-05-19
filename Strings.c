
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <ctype.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
* The purpose of this program is to read in several strings that
* are separated by spaces and then answer questions about each
* string.
*------------------------------------------------------------------
*/

void palindrome(char *string){
	if (string[0] == string[strlen(string)-1]){
		printf("String %s is a palindrome.\n", string);
	}
	else {
		printf("String %s is not a palindrome.\n", string);
	}
}

void firstChar(char *string){
	printf("The first character of the string is %c.\n", string[0]);
}

void stringLength(char *string){
	printf("The string is of length %d.\n", (int) strlen(string));
}

// [First Line Strings] How many uppercase letters does this string have?
void upperCase(char *string){
	int i, count = 0;
	for (i = 0; i < strlen(string); i++){
		if (isupper(string[i])){
			count++;
		}
	}
	printf("The string has %d uppercase letters.\n", count);
}

// [First Line Strings] How many lowercase letters does this string have?
void lowerCase(char *string){
	int i, count = 0;
	for (i = 0; i < strlen(string); i++){
		if (islower(string[i])){
			count++;
		}
	}
	printf("The string has %d lowercase letters.\n", count);
}

/*
*--------------------------------------------------------------
* [Second Line Strings] Is this string a number?
*--------------------------------------------------------------
* [Second Line Strings] If this string is a number, is it and
* integer or a real number (float)?
*--------------------------------------------------------------
*/

void stringIntNumber(char *string){
	int i, number = 1; // Default Integer
	for (i = 0; i < strlen(string); i++){
		// If it is a string
		if (!isdigit(string[i]) && string[i] != '.'){
			number = 0;
			break;
		}
		// If it is a real number
		else if (string[i] == '.'){
			number = 2;
		}
	}
	if (number == 0){
		printf("String %s is not a number.\n", string);
	}
	else if (number == 1){
		printf("String %s is an integer.\n", string);
	}
	else {
		printf("String %s is a real number.\n", string);
	}
}

int main(){
	FILE *fin;
	char *word;
	char str[1000];
	
	// Open the file to be read.
	fin = fopen("strings.txt", "r");
	if (fin == NULL){
		perror("Error Opening File");
		return(-1);
	}
	if (fgets(str, sizeof(str), stdin) != NULL){
		word = strtok(str, " \n");
		while(word != NULL){
			printf("\n-------First Line--------\n");
			palindrome(word);
			firstChar(word);
			stringLength(word);
			upperCase(word);
			lowerCase(word);
			word = strtok(NULL, " \n");
		}
	}
	
	if (fgets(str, sizeof(str), stdin) != NULL) {
		word = strtok(str, " \n");
		while(word != NULL){
			printf("\n-------Second Line--------\n");
			stringIntNumber(word);
			word = strtok(NULL, " \n");
		}
	}
	
	printf("\n");
	fclose(fin);
	return(0);
}