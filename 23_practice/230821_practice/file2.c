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
	printf("ȸ�� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. ȸ�� �ڵ� ����\n");
	printf("2. ȸ�� ��ü ����\n");
	printf("3. ȸ�� ����\n");
	printf("4. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}