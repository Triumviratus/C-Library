
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>

/*
*----------------------------------------------------------------------
* Ambrose Ryan Xavier
*----------------------------------------------------------------------
* Swap() is designed to swap two variables. SelectionSort() implements
* the selection sort algorithm.
*----------------------------------------------------------------------
*/

void Swap(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(char arr[], int size){
	int i,j;
	for (i = 0; i < size; i++){
		for (j = i, j < size; j++){
			if (arr[i] < arr[j]){
				Swap(&arr[i], &arr[j]);
			}
		}
	}
}

int main(){
	char *array = malloc(28 * sizeof(char)); // The array variable stores the values in the array.
	int i,j = 0; // Index of the Array
	char placeholder = 0; // This will temporarily store the values in the array.
	scanf("%c\n", &placeholder);
	while(placeholder != '0'){
		array[i] = placeholder;
		i = i + 1;
		/*
		* Line 39 moves to the next position in the array,
		* effectively incrementing the index of the array.
		*/
		scanf("%c\n", &placeholder);
	}
	SelectionSort(array, i);
	for (j = 0; j < i, j++){
		printf("%c ", array[j]);
	}
	printf("\n");
	return(0);
}