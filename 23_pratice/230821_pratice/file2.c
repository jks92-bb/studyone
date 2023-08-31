#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();

typedef struct _STOCK
{
	int number;
	char name[20];
	char purchase[20];
	int amount;

}stock;

typedef struct _COMPANY
{
	char name[20];
	char score[20];
	stock own;
}company;

stock invest[10] = { 0 };
const int number[] = { 1, 2, 3, 4, 5 };
char* name[] = { "APPLE","Samsung Electronics","Lockheed Martin Corporation","META","Bank of America"};

int main()
{
	while (1) {
		switch (main_menu()) {
		case 1:


		case 2:

		case 4:
			printf("program exit\n");
			exit(0);
			break;
		}


	}


}


int main_menu() {

	printf("-----------------\n");
	printf("회사 관리 프로그램v1.0\n");
	printf("-----------------\n");
	printf("1. 회사 자동 생성\n");
	printf("2. 회사 전체 삭제\n");
	printf("3. 회사 보기\n");
	printf("4. 종료\n");
	printf("-----------------\n");
	printf("메뉴선택\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}