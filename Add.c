
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#define WORD_SIZE 21
#define MAX_WORDS 10
#define LINE_SIZE 80

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	char language[WORD_SIZE];
	int size;
	char words[MAX_WORDS][WORD_SIZE];
} wordlist_t;

int contains(const char *word, const wordlist_t *list){
	int i;
	for (i = 0; i < list->size; i++){
		if (0 == strcmp(word, list->words[i]){
			return 1;
		}
	}
	return(0);
}

void add_word (const char *word, wordlist_t *list) {
	if (list -> size >= MAX_WORDS){
		printf("List is full, %s is not added\n", word);
		return;
	}
	if (contains(word, list)){
		return;
	}
	strcpy(list -> words[list -> size], word);
	list -> size++;
}

void load_word_list(char *filename, wordlist_t, *list){
	FILE *filep;
	char line[LINE_SIZE];
	int line_num = 0, word_count = 0;
	if (strcmp(filename, "stdin") != 0){
		filep = fopen(filename, "r");
	}
	else {
		filep = stdin;
		printf("Enter language and up to 12 words (no more than 80 characters total):\n");
	}
	while (fgets(line, LINE_SIZE, filep) && (word_count < MAX_WORDS)){
		char *newline = strchr(line, '\n');
		if (newline){
			*newline = '\0';
		}
		switch(line_num){
			case 0:
				strcpy(list->language, line);
				break;
			default:
				if (word_count < MAX_WORDS){
					strcpy(list->words[word_count], line);
					word_count++;
				}
				break;
		}
		line_num++;
	}
	list->size = word_count;
	if (strcmp(filename, "stdin") != 0){
		fclose(filep);
	}
}

void display_word_list (const wordlist_t *list, char type) {
	printf("----WORDLIST FOR %s-----\n", (type == 'f' ? "file" : "stdin"));
	printf("Language: %s\n", list->language);
	printf("Size: %d\n", list->size);
	printf("\n");
	int i;
	for (i = 0; i < list->size; i++){
		printf("%s\n", list->words[i]);
	}
	printf("----------------\n");
}

int equal_lists (const wordlist_t *list1, const wordlist_t *list2){
	if (list1->size != list2-> size){
		return 0;
	}
	if (strcmp(list1->language, list2->language) != 0){
		return 0;
	}
	int i;
	for (i = 0; i < list1->size; i++){
		if (!contains(list1->words[i], list2)){
			return 0;
		}
	}
	return 1;
}

int main(void){
	
	wordlist_t list1, list2;
	char word[20];
	int listType;
	int done = 0;
	
	load_word_list("data.txt", &list1);
	load_word_list("stdin", &list2);
	
	display_word_list(&list1, 'f');
	display_word_list(&list2, 's');
	
	while(!done){
		printf("Which list to search (1-file or 2-stdin or 0 to end): ");
		scanf("%", &listType);
		if (listType == 0){
			done = 1;
			break;
		}
		printf("Enter word to seach for: ");
		scanf("%s", word);
		int has_test = contains(word, (listType == 1 ? &list1 : &list2));
		printf("list from %s contains %s: %s\n", (listType == 1 ? "file" : "stdin"), word, (has_test == 1 ? "yes" : "no"));
		if (!has_test){
			add_word(word, (listType == 1 ? &list1 : &list2));
			display_word_list((listType == 1 ? &list1 : &list2), (listType == 1 ? 'f' : 's'));
		}
		int are_equal = equal_lists(&list1, &list2);
		printf("lists are equal: %s\n", (are_equal ? "yes" : "no"));
	}
	
	wordlist_t listA;
	load_word_list("data.txt", &listA);
	display_word_list(&listA);
	
	int has_test = contains("test", &listA);
	printf("list contains 'test' = %d\n", has_test);
	int has_apple = contains("apple", &listA);
	printf("list contains 'apple' = %d\n", has_apple);
	
	add_word("apple", &listA);
	add_word("this", &listA);
	display_word_list(&listA);
	
	wordlist_t listB;
	load_word_list("stdin", &listB);
	
	int are_equal = equal_lists (&listA, &listB);
	printf("lists are equal = %d\n", are_equal);
	
	return 0;
}