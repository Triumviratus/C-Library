
#include <stdio.h> // printf, scanf definitions
#include <string.h>
#include <stdlib.h>

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	char* name;
	int ID, cur_class_nos[5], credits;
	char year;
} student_t;

void print_student(student_t student){
	int j;
	printf("\nStudent ID: %d\n Name: %s\n Credits: %d\n Year: ", student.ID, student.name, student.credits);
	switch(student.year){
		case '1':
			printf("First Year");
			break;
		case '2':
			printf("Second Year");
			break;
		case '3':
			printf("Third Year");
			break;
		case '4':
			printf("Fourth Year");
			break;
	}
	printf("\n");
	for (j = 0; j < 5; ++j){
		printf("Taking class: %d\n", student.cur_class_nos[j]);
	}
	return;
}

typedef enum {false, true} Bool;

Bool student_equal(student_t st1, student_t st2){
	return(strcmp(st1.name, st2.name) == 0 && st1.ID == st2.ID && st1.credits == st2.credits);
}

void student_scan(student_t *stdnt){
	char first[50], last[50];
	student_t stdnt;
	printf("Read in information for students: ");
	scanf("%s %s %d %d %c", first, last, &(*stdnt).ID, &(*stdnt).credits, &(*stdnt).year);
	scanf("%s %s %d %d %c", first, last, &stdnt->ID, &stdnt->credits, &stdnt->year);
	strcpy((*stdnt).name, first);
	strcpy(stdnt->name, first);
	strcat((*stdnt).name, " ");
	strcat(stdnt->name, " ");
	strcat((*stdnt).name, last);
	strcat(stdnt->name, last);
	printf("Student name is %s\n", (*stdnt).name);
	printf("Student name is %s\n", stdnt->name);
	
	scanf("%s %s %d %d %c", first, last, &stdnt.ID, &stdnt.credits, &stdnt.year);
	strcpy(stdnt.name, first);
	strcat(stdnt.name, " ");
	strcat(stdnt.name, last);
	printf("Student name is %s\n", stdnt.name);
	return(stdnt);
	return;
}

student_t student_update_credits(student_t st){
	st.credit += 15;
	return st;
}

int main(){
	student_t head1 = {"Ambrose Ryan Xavier", 1, 115, 'Third Year'};
	student_t head2 = {"Ambrose Ryan Xavier", 1, 115, '3'};
	student_t newst = {"Peter Benjamin Parker", 4, 124, '2'};
	
	student_t BCS9[4] = {{"Alejandra Valentina Guerrero", 2, 45, 'Fourth Year'},{"Victoria Liu", 3, 15, 'First Year'},{"Salvatore Anselmo Savio Maria Maestri", 4, 124, 'Second Year'},{"Hector Casimir Richelieu", 5, 110, 'Third Year'}};
	
	student_t BCS9B[4] = {{"Alejandra Valentina Guerrero", 2, {112, 338, 215, 429, 107}, 45, '4'},{"Victoria Liu", 3, {112, 338, 215, 429, 107}, 15, '1'},{"Salvatore Anselmo Savio Maria Maestri", 4, {112, 338, 215, 429, 107}, 124, '2'},{"Hector Casimir Richelieu", 5, {112, 338, 215, 429, 107}, 110, '3'}};
	
	int i,j;
	for (i = 0; i < 4; i++){
		printf("\nStudent ID: %d\n Name: %s\n Credits: %d\n Year: ", BCS9[i].ID, BCS9[i].name, BCS9[i].credits);
		switch(BCS9[i].year){
			case '1':
				printf("First Year");
				break;
			case '2':
				printf("Second Year");
				break;
			case '3':
				printf("Third Year");
				break;
			case '4':
				printf("Fourth Year");
				break;
		}
		printf("\n");
	}
	
	for (i = 0; i < 4; i++){
		printf("\nStudent ID: %d\n Name: %s\n Credits: %d\n Year: ", BCS9B[i].ID, BCS9B[i].name, BCS9B[i].credits);
		switch(BCS9B[i].year){
			case '1':
				printf("First Year");
				break;
			case '2':
				printf("Second Year");
				break;
			case '3':
				printf("Third Year");
				break;
			case '4':
				printf("Fourth Year");
				break;
		}
		printf("\n");
		for (j = 0; j < 5; ++j){
			printf("Taking class: %d\n", BCS9B[i].cur_class_nos[j]);
		}
	}
	
	for (i = 0; i < 4; i++){
		print_student(BCS9B[i]);
	}
	
	printf("Student ID: %d\n Name: %s\n Credits: %d\n Year: ", head2.ID, head2.name, head2.credits);
	switch(head2.year){
		case '1':
			printf("First Year");
			break;
		case '2':
			printf("Second Year");
			break;
		case '3':
			printf("Third Year");
			break;
		case '4':
			printf("Fourth Year");
			break;
	}
	
	printf("head.name address is %p\n", head2.name);
	newst = head2;
	printf("head address is %p, newst address is %p\n", &head, &newst);
	newst.ID += 5;
	
	newst.name = malloc(50 * sizeof(char));
	strcpy(newst.name, head2.name);
	printf("newst.name address is %p\n", newst.name);
	newst.name[0] = 'G';
	
	printf("Student ID: %d\n Name: %s\n Credits: %d\n", newst.ID, newst.name, newst.credits);
	printf("newst.name address is %p\n", newst.name);
	
	
	Bool equals;
	student_t newst1, newst2;
	newst1 = head2;
	newst2 = head2;
	newst2.ID = 2;
	
	equals = student_equal(head2, newst1);
	if(equals){
		printf("head and newst1 match\n");
	}
	else {
		printf("head and newst1 do not match\n");
	}
	equals = student_equal(head2, newst2);
	if(equals){
		printf("head and newst1 match\n");
	}
	else {
		printf("head and newst2 do not match\n");
	}
	
	student_t st1, st2;
	st1.name = malloc(50 * sizeof(char));
	st2.name = malloc(50 * sizeof(char));
	student_scan(&st1);
	student_scan(&st2);
	
	equals = student_equal(st1, st2);
	if(equals){
		printf("student1 and student2 match\n");
	}
	else {
		printf("student1 and student2 do not match\n");
	}
	
	student_t st1 = student_scan();
	student_t st2 = student_scan();
	student_t str = student_update_credits(st1);
	
	printf("Address of st1 is %p; address of str is %p\n", &st1, &str);
	printf("Address of st1 name is %p; address of str name is %p\n", st1.name, str.name);
	printf("st1 credits are %d; str credits are %d\n", st1.credits, str.credits);
	printf("\n");
	return(0);
}