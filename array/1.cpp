#include <stdio.h>
void main()
{
	int n[10], i;
	double m = 0, v = 0;
	printf("10���� ������ �Է��ϼ��� : ");
	
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &n[i]);
		m = m + n[i];
	}
	m = m / 10.0;

	for (i = 0; i < 10; i++)
		v = v + (n[i] - m)*(n[i] - m);
	v = v / 10.0;

	printf("��� = %.2lf �л� = %.2lf\n", m,v);

}