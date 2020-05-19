

#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>
#include <string.h>
#define LINESIZE 80
#define MAXCLASSES 20

/*
*------------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------------
*/

typedef struct {
	char name[50]; // Name of Class
	char classID[10]; // Class ID
	int credits; // Number of Credits That Each Class Is Worth
} class_t;

void ReadClass(char* line, class_t* class){
	char line_copy[80];
	strcpy(line_copy, line);
	strcpy(class->classID, strtok(line, " "));
	strcpy(class->name, strtok(NULL, "1234"));
	class->credits = line_copy[strlen(line_copy)-2] - '0';
	return;
}

int ReadTxtClasses(class_t* classes){
	char* line = malloc(80 * sizeof(char));
	FILE* fptr = fopen("classes.txt", "r");
	int i = 0;
	do {
		fgets(line, 79, fptr);
		if (line[0] != 'X'){
			ReadClass(line, &classes[i]);
			++i;
		}
	} while (line[0] != 'X');
	fclose(fptr);
	return(i);
}

int main(){
	ReadTxtClasses();
}