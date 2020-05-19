
#include <stdio.h> // printf, scanf definitions
#include <stdlib.h>
#include <string.h>

/*
*------------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------------
*/

typedef struct {
	char item_name[20];
	int cost;
	int aisle;
	char category;
} masterlist_t;

void addToMasterList(masterlist_t *ml, int number_of_items){
	char item_name[20];
	int cost;
	int aisle;
	char category;
	char nl; // newline
	printf("Enter Name: ");
	scanf("%s", item_name);
	printf("Enter Price: ");
	scanf("%d", &cost);
	printf("Enter Aisle: ");
	scanf("%d", &aisle);
	printf("Enter Category: ");
	scanf(" %c%c", &category, &nl);
	stpcpy(ml[number_of_items].item_name, item_name);
	ml[number_of_items].cost = cost;
	ml[number_of_items].aisle = aisle;
	ml[number_of_items].category = category;
}

void printCategoryNumber(masterlist_t *ml, int number_of_items){
	char category, nl;
	printf("Enter Category to Print: ");
	scanf("%c%c", &category, &nl);
	int i, sum = 0;
	for (i = 0; i < number_of_items; ++i){
		if (category == ml[i].category){
			sum++;
		}
	}
	switch(category){
		case 'C':
		case 'c':
			printf("There are (is) <%d> Item(s) in the Canned Goods Category\n", sum);
			break;
		case 'D':
		case 'd':
			printf("There are (is) <%d> Item(s) in the Dairy Category\n", sum);
			break;
		case 'P':
		case 'p':
			printf("There are (is) <%d> Item(s) in the Produce Category\n", sum);
			break;
		case 'M':
		case 'm':
			printf("There are (is) <%d> Item(s) in the Meat Category\n", sum);
			break;
		default:
			fprintf(stderr, "Illegal Category");
	}
	return;
}

void printList(masterlist_t *ml, int number_of_items){
	char categories[4] = {'C', 'D', 'P', 'M'};
	char *category_names[4] = {"Canned Goods", "Dairy", "Produce", "Meat"};
	int i, j;
	for (i = 0; i <= 3, ++i){
		printf("%s\n", category_names[i]);
		for (j = 0; j < number_of_items; ++j){
			if (categories[i] == ml[j].category){
				printf("%s, Price: %d, Aisle: %d\n", ml[j].item_name, ml[j].cost, ml[j].aisle);
			}
		}
	}
}

void UserInterface(masterlist_t *ml, int *number_of_items){
	char option, nl;
	while(option != 'X'){
		option = '\0';
		printf("Enter Option (A, N, L, X): ");
		/*
		* A --> Add Item
		* N --> Number of Items in Category
		* L --> List All Items
		* X --> Exit Program
		*/
		scanf("%c%c", &option, &nl);
		switch(option){
			case 'A':
			case 'a':
				addToMasterList(ml, *number_of_items);
				++(*number_of_items);
				break;
			case '\n':
				break;
			case 'N':
			case 'n':
				printCategoryNumber(ml, *number_of_items);
				break;
			case 'L':
			case 'l':
				printList(ml, *number_of_items);
				break;
			case 'X':
			case 'x':
				break;
			default:
				fprintf(stderr, "Illegal Option");
		}
	}
}

int main(){
	masterlist_t ml[100];
	FILE *binptr = fopen("output.bin", "rb");
	int number_of_items = fread(&ml, sizeof(masterlist_t), 100, binptr);
	fclose(binptr);
	UserInterface(ml, &number_of_items);
	binptr = fopen("output.bin", "wb");
	fwrite(&ml, sizeof(masterlist_t), number_of_items, binptr);
	fclose(binptr);
	return(0);
}