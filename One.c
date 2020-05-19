

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

void WriteBinClasses(class_t* classes, int size){
	FILE* fptr = fopen("classes.bin", "wb");
	fwrite(classes, sizeof(class_t), size, fptr);
	fclose(fptr);
	return;
}

void ReadPrintBinClasses(){
	FILE* fptr = fopen("classes.bin", "wb");
	class_t classes[10];
	int i = 0;
	while(feof(fptr) == 0){
		fread(&classes[i], sizeof(class_t), 1, fptr);
		print("ID: %s, NAME: %s, CREDITS: %d\n", classes[i].classID, classes[i].name, classes[i].credits);
	}
	fclose(fptr);
	return;
}