
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	char *className;
	int classCredit;
	char *classID;
} class_t;

int ReadClasses(class_t classArray[]){
	char *line;
	char *line_copy;
	char ccredit;
	int credits;
	line = malloc(80 * sizeof(char));
	line_copy = malloc(80 * sizeof(char));
	
	int i = 0; // Counter
	while(1){
		fgets(line, 80, stdin);
		if (line[0] == 'X'){
			break;
		}
		strcpy(line_copy, line);
		classArray[i].classID = malloc(10 * sizeof(char));
		strcpy(classArray[i].classID, strtok(line, " "));
		classArray[i].className = malloc(60 * sizeof(char));
		strcpy(classArray[i].className, strtok(NULL, "1234"));
		ccredit = line_copy[strlen(line_copy)-3];
		classArray[i].classCredit = credits;
		i++;
	}
	return(i);
}

void PrintClasses(class_t classArray[], int size){
	int line, a, b, c, d = 0;
	/*
	* a: total number of all classes, b: total number of all class credits
	* c: total number of CSCI classes, d: total number of CSCI class credits
	*/
	printf("\n");
	for(line = 0; line < size; line++){
		printf("Class: ID-%s, Name-%s, Credits-%d\n", classArray[line].classID, classArray[line].className, classArray[line].classCredit);
	}
	print("\n");
	for (line = 0; line < size; line++){
		++a; // Total Classes
		b += classArray[line].classCredit; // Total Credits
		if (strncmp(classArray[line].classID, "CSCI", 4) == 0){
			++c; // CSCI Classes
			d += classArray[line].classCredit; // CSCI Credits
		}
	}
	printf("Total classes: %d\n", a);
	printf("Total class credits: %d\n", b);
	printf("CSCI classes: %d\n", c);
	printf("CSCI class credits: %d\n", d);
	printf("\n");
}

int main(){
	class_t classArray[80];
	int size = ReadClasses(classArray);
	PrintClasses(classArray, size);
	return(0);
}