#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct AS
{
	char product[50];
	int date;
	char name[20];
	char phone[14];
};

void main()
{
	int menu, date, list = 0, i, num, size = 10;
	char product[20], name[20], phone[14];

	struct AS *s;
	s = (struct AS*)malloc(sizeof(struct AS) * 10);

	while (1) {
		printf("�Է�(1) ���(2) �˻�(3) ����(4)?");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1: //�߰�
			if ((list+1) == size)
			{
				size += 10;
				s = (struct AS*)realloc(s, sizeof(struct AS)*size);
			}
			printf("%d��° �߰�\n", list + 1);
			printf("��ǰ�� : ");
			scanf_s("\n");
			gets_s(s[list].product);
			printf("��¥ : ");
			scanf_s("%d", &s[list].date);
			printf("���� : ");
			scanf_s("\n");
			gets_s(s[list].name);
			printf("��ȭ��ȣ : ");
			gets_s(s[list].phone);
			list++;
			break;

		case 2: //���
			printf("\n��� %d���� AS�Ǽ��� �ֽ��ϴ�.\n", list);
			for (i = 0; i < list; i++) {
				printf("[%d] ��ǰ�� : %s   ", i + 1, s[i].product);
				printf("��¥ : %d   ", s[i].date);
				printf("���� : %s  ", s[i].name);
				printf("��ȭ��ȣ : %s   ", s[i].phone);
			}
			printf("\n");
			break;

		case 3: //�˻�
			printf("�˻��� �׸�(��ǰ��(1) ��¥(2) ����(3) ��ȭ��ȣ(4) ?");
			scanf_s("%d", &num);
			if (num == 1) {
				printf("��ǰ��? ");
				scanf_s("\n");
				gets_s(product);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].product, product) == 0)
					{
						printf("[%d] ��ǰ�� : %s   ", i + 1, s[i].product);
						printf("��¥ : %d   ", s[i].date);
						printf("���� : %s  ", s[i].name);
						printf("��ȭ��ȣ : %s   ", s[i].phone);
					}
				}

				printf("\n");
			}
			else if (num == 2) {
				printf("��¥? ");
				scanf_s("%d", &date);
				for (i = 0; i < list; i++)
				{
					if (s[i].date == date)
					{
						printf("[%d] ��ǰ�� : %s   ", i + 1, s[i].product);
						printf("��¥ : %d   ", s[i].date);
						printf("���� : %s  ", s[i].name);
						printf("��ȭ��ȣ : %s   ", s[i].phone);
					}
				}
				printf("\n");
			}
			else if (num == 3) {
				printf("����? ");
				scanf_s("\n");
				gets_s(name);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].name, name) == 0)
					{
						printf("[%d] ��ǰ�� : %s   ", i + 1, s[i].product);
						printf("��¥ : %d   ", s[i].date);
						printf("���� : %s  ", s[i].name);
						printf("��ȭ��ȣ : %s   ", s[i].phone);
					}
				}
				printf("\n");

			}
			else if (num == 4) {
				printf("��ȭ��ȣ? ");
				scanf_s("\n");
				gets_s(phone);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].phone, phone) == 0)
					{
						printf("[%d] ��ǰ�� : %s   ", i + 1, s[i].product);
						printf("��¥ : %d   ", s[i].date);
						printf("���� : %s  ", s[i].name);
						printf("��ȭ��ȣ : %s   ", s[i].phone);
					}
				}
				printf("\n");
			}
			break;
		case 4: //����
			return;
		}
	}
}