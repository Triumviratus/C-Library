
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>
#include <string.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	char item_name[20];
	int cost;
	int aisle;
	char category;
} masterlist_t;

int main(){
	FILE *fpTXT = NULL;
	FILE *fpBIN = NULL;
	masterlist_t ml[100];
	fpTXT = fopen("grocery.txt", "r");
	int i = 0; // Counter
	char line[81];
	while(fgets(line, 80, fpTXT) != NULL){
		strcpy(ml[i].item_name, strtok(line, " "));
		sscanf(strtok(NULL, " "), "%d", &ml[i].cost);
		sscanf(strtok(NULL, " "), "%d", &ml[i].aisle);
		sscanf(strtok(NULL, " "), "%c", &ml[i].category);
		printf("%s %d %d %c\n", ml[i].item_name, ml[i].cost, ml[i].aisle, ml[i].category);
		i++;
	}
	fpBIN = fopen("output.bin", "wb");
	fwrite(&ml, sizeof(masterlist_t), i, fpBIN);
	fclose(fpTXT);
	return(0);
}