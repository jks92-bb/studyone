#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main_menu();


typedef struct car
{
	char model[20];

}CAR; //*pCAR;

typedef struct manager
{
	char name[20];
}manager;

typedef struct customer
{
	char namee[20];
	CAR own;
	struct manager ma;
}customer;

void cutomer_input(customer inf[]);
void customer_output(customer inf[]);

char* model[5] = { "트레블레이저", "아반떼", "제네시스", "k5", "k9" };
char* name[5] = { "이창수", "조지석", "김정식", "김상식", "이양식" };
char* namee[5] = { "김창수", "조지훈", "김일식", "김중식", "이한식" };



int main()
{

	customer inf[10] = { 0 };
	srand(time(NULL));
	char num = 0;
	char num2 = 0;
	char num3 = 0;

	while (1) {
		switch (main_menu()) {
		case 1:

			printf("고객이름 입력 : \n");
			scanf("%s", &num);
			printf("차량 입력 : \n");
			scanf("%s", &num2);
			printf("매니저이름 입력 : \n");
			scanf("%s", &num3);
		case 2:
			cutomer_input(inf);
			break;

		case 3:
			printf("고객이름 : %s 차량모델 :%s 매니저이름 :%s\n", &num, &num2, &num3);
			//customer_output(inf);
			break;

		case 4:
			printf("종료\n");
			exit(0);

		default:
			printf("잘못된 메뉴 입력!!\n");
			break;
		}




	}
}

int main_menu()
{
	printf("---------------------------\n");
	printf("고객차량 관리 프로그램 v1.6\n");
	printf("---------------------------\n");
	printf("1. 고객정보 직접 입력\n");
	printf("2. 고객정보 랜덤 입력\n");
	printf("3. 고객정보 보기\n");
	printf("4. 종료\n");
	printf("---------------------------\n");
	printf("메뉴 선택 : \n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}

void cutomer_input(customer inf[])
{
	for (int i = 0; i < 1; i++) {
		strcpy(inf[i].namee, namee[rand() % 5]);
		strcpy(inf[i].own.model, model[rand() % 5]);
		strcpy(inf[i].ma.name, name[rand() % 5]);
	}
}

void customer_output(customer inf[])
{
	for (int i = 0; i < 1; i++) {
		printf("고객정보 : %s\n", inf[i].namee);
		printf("차량 정보 : %s\n", inf[i].own.model);
		printf("매니저 정보 : %s\n", inf[i].ma.name);
	}
}