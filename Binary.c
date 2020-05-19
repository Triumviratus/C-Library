
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>
#include <string.h>
#define LINESIZE 80
#define MAXCLASSES 20

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	char name[50]; // Name of Class
	char classID[10]; // Class ID
	int credits; // Number of Credits That Each Class Is Worth
} class_t;

int main(){
	int i;
	FILE *bfile = fopen("numbers.bin", "wb");
	for (i = 0; i <= 500; ++i){
		fwrite(&i, sizeof(int), 1, bfile);
	}
	fclose(bfile);
	return(0);
}

int main(){
	int i;
	FILE *bfile = fopen("numbers.bin", "wb");
	char* string = "string"; // Add 1 to strlen to allow for the '\0' term
	for (i = 0; i <= 5000; ++i){
		fwrite(string, strlen(string) + 1, 1, bfile);
	}
	fclose(bfile);
	return(0);
}

int main(){
	FILE *bfile = fopen("numbers.bin", "rb");
	int arr[501];
	fread(arr, sizeof(int), 501, bfile);
	fclose(bfile);
	printf("%d %d\n", arr[20], arr[100]);
	return(0);
}

int main(){
	FILE *bfile = fopen("numbers.bin", "rb");
	int arr[5001][7];
	fread(arr, 7, 5001, bfile);
	fclose(bfile);
	printf("%d %d\n", arr[20], arr[100]);
	return(0);
}

int main(){
	class_t classes[50];
	int size = ReadTxtClasses(classes);
	WriteBinClasses(classes, size);
	ReadPrintBinClasses();
	return(0);
}