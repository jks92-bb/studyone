#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int main_menu();
void gugudan1();
void gugudan2();
void full_gugu();



int main()
{
	while (1) {

		//int menu = main_menu();
		int a[][9] = { 0 };
		switch (main_menu()) {

		case 1:
			printf("������ ¦���� ��� �Լ� ���\n");
			gugudan1();
			break;

		case 2:
			printf("������ Ȧ���� ��� �Լ� ���\n");
			gugudan2();

			break;

		case 3:
			printf("������ ��ü ��� �Լ� ���\n");
			full_gugu();
			break;

		case 4:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� �޴� �Է�!!\n");
			break;
		}
	}

}

int main_menu()
{
	printf("-----------------------------\n");
	printf("�������� ����ϴ� �Լ� ����v1.0\n");
	printf("-----------------------------\n");
	printf("1. ������ ¦���� ���\n");
	printf("2. ������ Ȧ���� ���\n");
	printf("3. ������ ��ü ���\n");
	printf("4. ����\n");
	printf("-----------------------------\n");
	printf("�޴� ���� :\n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}

void full_gugu()
{
	for (int i = 1; i < 10; i++) { // 1- 9
		for (int j = 2; j < 10; j++) { //�� 2-9
			printf("%d x %d = %d \t", j, i, j * i);
		}
		printf("\n");
	}
}

void gugudan1()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {

			if (j % 2 == 0) {
				printf("%d x %d = %d \t", j, i, j * i);
			}

		}
		printf("\n");
	}
}

void gugudan2()
{
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {

			if (i % 2 != 0) {
				printf("%d x %d = %d \n", i, j, i * j);
			}

		}
	}
}

