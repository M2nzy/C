#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void print_list(struct node *);
void insert_last(struct node **, struct node **, int);
struct node *make_list_typeL();
struct node *crossAB(struct node*, struct node*);
void list_sort(struct node *);

void main()
{
	struct node *A, *B, *AB;

	A = make_list_typeL();
	B = make_list_typeL();
	AB = crossAB(A, B);
	list_sort(AB);
	print_list(AB);
}

void list_sort(struct node *AB)
{
	struct node *cur, *temp;
	int datat;
	int swap = 1;
	while (swap)
	{
		swap = 0;
		for (cur = AB; cur->next != NULL; cur = cur->next)
		{
			if (cur->data > cur->next->data)
			{
				datat = cur->next->data;
				cur->next->data = cur->data;
				cur->data = datat;
				swap = 1;
			}
		}
	}
}


struct node *crossAB(struct node *A, struct node *B)
{
	struct node *temp;
	struct node *cur;
	for (cur = A; cur != NULL; cur = cur->next)
	{
		temp = cur->next;
		cur->next = B;
		B = temp;
	}
	return A;
}

void insert_last(struct node **start, struct node **last, int data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));

	temp->data = data;
	temp->next = NULL;

	if (*start != NULL)
		(*last)->next = temp;
	else
		*start = temp;
	*last = temp;
}

struct node *make_list_typeL()
{
	struct node *start = NULL, *last;
	int n;
	while (1)
	{
		scanf_s("%d", &n);
		if (n == -1)
			break;
		else
			insert_last(&start, &last, n);
	}
	return start;
}

void print_list(struct node *start)
{
	struct node *cur;
	printf("[");
	for (cur = start; cur != NULL; cur = cur->next)
	{
		printf("%d ", cur->data);
	}
	printf("]\n");
}