#include <stdio.h>

typedef enum shape_type {
	TRIANGLE,
	SQUARE,
	CIRCLE
}Type;

typedef struct shape {
	Type type;	
	union {
		struct {
			double base;
			double height;
		}triangle;
		struct {
			double width;
			double height;
		}square;
		struct {
			double radius;
		}circle;
	}data;
}Shape;

void main()
{
	Shape a[5];
	int i = 0;
	int type;
	for (i = 0; i<5; i++)
	{
		printf("type(0-2) : ");
		scanf_s("%d", &type);
		a[i].type = (Type)type;

		switch (type)
		{
		case TRIANGLE:
			printf("base : ");
			scanf_s("%lf", &a[i].data.triangle.base);
			printf("height : ");
			scanf_s("%lf", &a[i].data.triangle.height);
			break;
		case SQUARE:
			printf("width : ");
			scanf_s("%lf", &a[i].data.square.width);
			printf("height : ");
			scanf_s("%lf", &a[i].data.square.height);
			break;
		case CIRCLE:
			printf("radius : ");
			scanf_s("%lf", &a[i].data.circle.radius);
			break;
		}
	}

	for (i = 0; i<5; i++)
	{
		switch (a[i].type)
		{
		case TRIANGLE:
			printf("Triangle\n");
			printf("base : %lf\n", a[i].data.triangle.base);
			printf("height : %lf\n", a[i].data.triangle.height);
			printf("Area : %lf\n", (a[i].data.triangle.base * a[i].data.triangle.height) / 2.0);
			break;
		case SQUARE:
			printf("Square\n");
			printf("width : %lf\n", a[i].data.square.width);
			printf("height : %lf\n", a[i].data.square.height);
			printf("Area : %lf\n", a[i].data.square.width * a[i].data.square.height);
			break;
		case CIRCLE:
			printf("Circle\n");
			printf("radius : %lf\n", a[i].data.circle.radius);
			printf("Area : %lf\n", a[i].data.circle.radius * a[i].data.circle.radius * 3.14);
			break;
		}
		printf("\n");
	}
}