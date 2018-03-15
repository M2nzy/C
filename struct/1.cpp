#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
double cbr_distance(struct point *, struct point *);
void sort(double [], int);

struct point {
	int x;
	int y;
};

void main()
{
	int i;
	struct point a[100];
	struct point b = { 0, };
	double r[100] = { 0, };

	srand(time(0));
	for (i = 0; i<100; i++)
	{
		a[i].x = rand() % 101;
		a[i].y = rand() % 101;
	}

	printf("x : ");
	scanf_s("%d", &b.x);
	printf("y : ");
	scanf_s("%d", &b.y);

	for (i = 0; i < 100; i++)
		r[i] = cbr_distance(&a[i], &b);

	sort(r, 100);

	for (i = 0; i < 100; i++)
	{
		if (r[i]<10)
			printf("%.2lf\n", r[i]);
	}
}

double cbr_distance(struct point *p1, struct point *p2)
{
	return sqrt(((p2->x) - (p1->x))*((p2->x) - (p1->x)) + ((p2->y) - (p1->y))*((p2->y) - (p1->y)));
}

void sort(double arr[], int n) {
	int i, j, min;
	double temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}