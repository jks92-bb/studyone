#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> //strcmp. strcpy
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

char* model[5] = { "Ʈ��������", "�ƹݶ�", "���׽ý�", "k5", "k9" };
char* name[5] = { "��â��", "������", "������", "����", "�̾��" };
char* namee[5] = { "��â��", "������", "���Ͻ�", "���߽�", "���ѽ�" };

int main()
{
	customer inf[10] = { 0 };
	srand(time(NULL));

	while (1) {
		switch (main_menu()) {
		case 1:
			printf("���̸� �Է� : \n");
			scanf("%s", &inf[0].namee);
			printf("���� �Է� : \n");
			scanf("%s", &inf[0].own.model);
			printf("�Ŵ����̸� �Է� : \n");
			scanf("%s", &inf[0].ma.name);
			break;

		case 2:
			cutomer_input(inf);
			break;

		case 3:
			customer_output(inf);
			break;

		case 4:
			printf("����\n");
			exit(0);

		default:
			printf("�߸��� �޴� �Է�!!\n");
			break;
		}
	}
}

int main_menu()
{
	printf("---------------------------\n");
	printf("������ ���� ���α׷� v1.6\n");
	printf("---------------------------\n");
	printf("1. ������ ���� �Է�\n");
	printf("2. ������ ���� �Է�\n");
	printf("3. ������ ����\n");
	printf("4. ����\n");
	printf("---------------------------\n");
	printf("�޴� ���� : \n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}

void cutomer_input(customer inf[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(inf[i].namee, namee[rand() % 5]);
		strcpy(inf[i].own.model, model[rand() % 5]);
		strcpy(inf[i].ma.name, name[rand() % 5]);
	}
}

void customer_output(customer inf[])
{
	for (int i = 0; i < 5; i++) {
		// inf[i].namee�� ���� ""�� ���ٸ�
		// ��, �������� ������ Ż����.
		if (strcmp(inf[i].namee, "") == 0) {
			break;
		}
		printf("������ : %s\n", inf[i].namee);
		printf("���� ���� : %s\n", inf[i].own.model);
		printf("�Ŵ��� ���� : %s\n", inf[i].ma.name);
		printf("-----------------\n");
	}
}