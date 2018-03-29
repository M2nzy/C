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
			printf("ã���� �ϴ� �л��� �̸�? ");
			scanf_s("\n");
			gets_s(search_name);
			search_student(start, search_name);
			break;
		case 3:
			printf("�����ϰ��� �ϴ� �л��� �̸�? ");
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
		printf("�̸� : %s\t\t", ptr->name);
		printf("�й� : %d\t\t", ptr->id);
		printf("�а� : %s\t\t", ptr->dept);
		printf("���� : %d\t\t", ptr->age);
		printf("\n");
	}
}

void made_list(struct Student **start, struct Student **last)
{
	struct Student *tmp = (struct Student *)malloc(sizeof(struct Student));
	printf("�̸�? ");
	scanf_s("\n");
	gets_s(tmp->name);
	printf("�й�? ");
	scanf_s("%d", &tmp->id);
	printf("�а�? ");
	scanf_s("\n");
	gets_s(tmp->dept);
	printf("����? ");
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
			printf("�̸� : %s\t\t", ptr->name);
			printf("�й� : %d\t\t", ptr->id);
			printf("�а� : %s\t\t", ptr->dept);
			printf("���� : %d\t\t", ptr->age);
			printf("\n");
			break;
		}
	}
	if (ptr == NULL)
		printf("ã���� �ϴ� �л��� �����ϴ�.\n");
}

void modify_student(struct Student *start, char modify_name[])
{
	struct Student *ptr;
	int menu;
	for (ptr = start; ptr != NULL; ptr = ptr->next)
	{
		if (strcmp(ptr->name, modify_name) == 0)
		{
			printf("�̸� : %s\t\t", ptr->name);
			printf("�й� : %d\t\t", ptr->id);
			printf("�а� : %s\t\t", ptr->dept);
			printf("���� : %d\t\t", ptr->age);
			printf("\n");
			
			printf("������ �׸��� �����ϼ��� (1:�̸� 2:�й� 3:�а� 4:����)");
			scanf_s("%d", &menu);
			switch (menu)
			{
			case 1:
				printf("������ �̸��� �Է��ϼ��� : ");
				scanf_s("\n");
				gets_s(ptr->name);
				printf("���� �Ϸ�!\n");
				break;
			case 2:
				printf("������ �й��� �Է��ϼ��� : ");
				scanf_s("\n");
				scanf_s("%d", &ptr->id);
				printf("���� �Ϸ�!\n");
				break;
			case 3:
				printf("������ �а��� �Է��ϼ��� : ");
				scanf_s("\n");
				gets_s(ptr->dept);
				printf("���� �Ϸ�!\n");
				break;
			case 4:
				printf("������ ���̸� �Է��ϼ��� : ");
				scanf_s("\n");
				scanf_s("%d", (int*)&ptr->age);
				printf("���� �Ϸ�!\n");
				break;
			}
			break;
		}
	}
	if(ptr==NULL)
		printf("�����ϰ��� �ϴ� �л��� �����ϴ�.\n");
}
