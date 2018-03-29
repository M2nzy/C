#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void made_list(struct Student **, struct Student **);
void print_list(struct Student *);
void search_student(struct Student *, char[]);
void modify_student(struct Student *, char[]);

struct Student
{
	char name[20];
	int id;
	char dept[20];
	char age;
	struct Student *next;
};

int main()
{
	struct Student *start = NULL, *last = NULL;
	int menu;
	char search_name[100], modify_name[100];
	while (1) {
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			made_list(&start, &last);
			break;
		case 2:
			printf("찾고자 하는 학생의 이름? ");
			scanf_s("\n");
			gets_s(search_name);
			search_student(start, search_name);
			break;
		case 3:
			printf("수정하고자 하는 학생의 이름? ");
			scanf_s("\n");
			gets_s(modify_name);
			modify_student(start, modify_name);
			break;
		case 4:
			print_list(start);
			break;
		case 5:
			return 0;
		}
	}
}

void print_list(struct Student *start)
{
	struct Student *ptr;
	for (ptr = start; ptr != NULL; ptr = ptr->next)
	{
		printf("이름 : %s\t\t", ptr->name);
		printf("학번 : %d\t\t", ptr->id);
		printf("학과 : %s\t\t", ptr->dept);
		printf("나이 : %d\t\t", ptr->age);
		printf("\n");
	}
}

void made_list(struct Student **start, struct Student **last)
{
	struct Student *tmp = (struct Student *)malloc(sizeof(struct Student));
	printf("이름? ");
	scanf_s("\n");
	gets_s(tmp->name);
	printf("학번? ");
	scanf_s("%d", &tmp->id);
	printf("학과? ");
	scanf_s("\n");
	gets_s(tmp->dept);
	printf("나이? ");
	scanf_s("%d", (int*)&tmp->age);
	tmp->next = NULL;
	
	if (*start != NULL)
		(*last)->next = tmp;
	else *start = tmp;
	*last = tmp;
}

void search_student(struct Student *start, char search_name[]) 
{
	struct Student *ptr;
	for (ptr = start; ptr != NULL; ptr = ptr->next)
	{
		if (strcmp(ptr->name, search_name)==0)
		{
			printf("이름 : %s\t\t", ptr->name);
			printf("학번 : %d\t\t", ptr->id);
			printf("학과 : %s\t\t", ptr->dept);
			printf("나이 : %d\t\t", ptr->age);
			printf("\n");
			break;
		}
	}
	if (ptr == NULL)
		printf("찾고자 하는 학생이 없습니다.\n");
}

void modify_student(struct Student *start, char modify_name[])
{
	struct Student *ptr;
	int menu;
	for (ptr = start; ptr != NULL; ptr = ptr->next)
	{
		if (strcmp(ptr->name, modify_name) == 0)
		{
			printf("이름 : %s\t\t", ptr->name);
			printf("학번 : %d\t\t", ptr->id);
			printf("학과 : %s\t\t", ptr->dept);
			printf("나이 : %d\t\t", ptr->age);
			printf("\n");
			
			printf("수정할 항목을 선택하세요 (1:이름 2:학번 3:학과 4:나이)");
			scanf_s("%d", &menu);
			switch (menu)
			{
			case 1:
				printf("수정할 이름을 입력하세요 : ");
				scanf_s("\n");
				gets_s(ptr->name);
				printf("수정 완료!\n");
				break;
			case 2:
				printf("수정할 학번을 입력하세요 : ");
				scanf_s("\n");
				scanf_s("%d", &ptr->id);
				printf("수정 완료!\n");
				break;
			case 3:
				printf("수정할 학과를 입력하세요 : ");
				scanf_s("\n");
				gets_s(ptr->dept);
				printf("수정 완료!\n");
				break;
			case 4:
				printf("수정할 나이를 입력하세요 : ");
				scanf_s("\n");
				scanf_s("%d", (int*)&ptr->age);
				printf("수정 완료!\n");
				break;
			}
			break;
		}
	}
	if(ptr==NULL)
		printf("수정하고자 하는 학생이 없습니다.\n");
}
