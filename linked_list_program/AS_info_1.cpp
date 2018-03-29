#include <stdio.h>
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
	int menu, date, list = 0, i, num;
	char product[20], name[20], phone[14];

	struct AS s[100];
	while (1) {
		printf("입력(1) 출력(2) 검색(3) 종료(4)?");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1: //추가
			if (list == 100)
			{
				printf("사용가능한 배열 공간이 없습니다. 추가할 수 없습니다.\n");
				break;
			}
			printf("%d번째 추가\n", list + 1);
			printf("제품명 : ");
			scanf_s("\n");
			gets_s(s[list].product);
			printf("날짜 : ");
			scanf_s("%d", &s[list].date);
			printf("고객명 : ");
			scanf_s("\n");
			gets_s(s[list].name);
			printf("전화번호 : ");
			gets_s(s[list].phone);
			list++;
			break;

		case 2: //출력
			printf("\n모두 %d개의 AS건수가 있습니다.\n", list);
			for (i = 0; i < list; i++) {
				printf("[%d] 제품명 : %s   ", i + 1, s[i].product);
				printf("날짜 : %d   ", s[i].date);
				printf("고객명 : %s  ", s[i].name);
				printf("전화번호 : %s   ", s[i].phone);
			}
			printf("\n");
			break;

		case 3: //검색
			printf("검색할 항목(제품명(1) 날짜(2) 고객명(3) 전화번호(4) ?");
			scanf_s("%d", &num);
			if (num == 1) {
				printf("제품명? ");
				scanf_s("\n");
				gets_s(product);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].product, product) == 0)
					{
						printf("[%d] 제품명 : %s   ", i + 1, s[i].product);
						printf("날짜 : %d   ", s[i].date);
						printf("고객명 : %s  ", s[i].name);
						printf("전화번호 : %s   ", s[i].phone);
					}
				}

				printf("\n");
			}
			else if (num == 2) {
				printf("날짜? ");
				scanf_s("%d", &date);
				for (i = 0; i < list; i++)
				{
					if (s[i].date == date)
					{
						printf("[%d] 제품명 : %s   ", i + 1, s[i].product);
						printf("날짜 : %d   ", s[i].date);
						printf("고객명 : %s  ", s[i].name);
						printf("전화번호 : %s   ", s[i].phone);
					}
				}
				printf("\n");
			}
			else if (num == 3) {
				printf("고객명? ");
				scanf_s("\n");
				gets_s(name);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].name, name) == 0)
					{
						printf("[%d] 제품명 : %s   ", i + 1, s[i].product);
						printf("날짜 : %d   ", s[i].date);
						printf("고객명 : %s  ", s[i].name);
						printf("전화번호 : %s   ", s[i].phone);
					}
				}
				printf("\n");

			}
			else if (num == 4) {
				printf("전화번호? ");
				scanf_s("\n");
				gets_s(phone);
				for (i = 0; i < list; i++)
				{
					if (strcmp(s[i].phone, phone) == 0)
					{
						printf("[%d] 제품명 : %s   ", i + 1, s[i].product);
						printf("날짜 : %d   ", s[i].date);
						printf("고객명 : %s  ", s[i].name);
						printf("전화번호 : %s   ", s[i].phone);
					}
				}
				printf("\n");
			}
			break;
		case 4: //종료
			return;
		}
	}
}