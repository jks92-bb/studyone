#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main_menu();

struct car {
	char model[20];
	char price[20];
	int year;
	char color[10];
	char office[50];
};

struct customer {
	char name[20];
	char tel[20];
	char addr[20];
	char job[20];
	int age;
	struct car own;
};




int main()
{
	char* model[5] = { "������911","���׽ý�","�ҳ�Ÿ","�ƹݶ�" ,"k9" };
	char* price[5] = { "4õ����","5õ����", "7õ����", "8õ����", "1���" };
	int year[5] = { 2020,2021,2022,2023,2024 };
	char* color[5] = { "���", "���", "�Ķ�","����","���" };
	char* office[5] = { "�뱸", "��õ", "�λ�", "����", "��õ" };

	char* name[5] = { "���켺", "������", "�̺���", "������", "�ں���" };
	char* tel[5] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "010-4134-4587" };
	char* addr[5] = { "�뱸", "����", "�λ�", "����", "��õ" };
	char* job[5] = { "������", "ȸ���", "������", "�����", "����" };
	int age[5] = { 25,35,40,45,50 };

	struct customer cu[100] = { 0 };
	srand(time(NULL));

	while (1) {

		switch (main_menu()) {

		case 1:
			for (int i = 0; i < 100; i++) {

				strcpy(cu[i].name, name[rand() % 5]);
				strcpy(cu[i].addr, addr[rand() % 5]);
				strcpy(cu[i].tel, tel[rand() % 5]);
				strcpy(cu[i].job, job[rand() % 5]);
				cu[i].age = age[rand() % 5];

				strcpy(cu[i].own.model, model[rand() % 5]);
				strcpy(cu[i].own.price, price[rand() % 5]);
				cu[i].own.year = year[rand() % 5];
				strcpy(cu[i].own.color, color[rand() % 5]);
				strcpy(cu[i].own.office, office[rand() % 5]);
			}
			printf("���������� ������ �ԷµǾ����ϴ�.\n");
			break;

		case 2:
			for (int i = 0; i < 100; i++) {

				printf("���� : %s\n", cu[i].name);
				printf("��ȭ : %s\n", cu[i].tel);
				printf("�ּ� : %s\n", cu[i].addr);
				printf("���� : %s\n", cu[i].job);
				printf("���� : %d\n", cu[i].age);
				printf("�𵨸� : %s\n", cu[i].own.model);
				printf("���� : %s\n", cu[i].own.price);
				printf("���� : %s\n", cu[i].own.color);
				printf("���� : %d\n", cu[i].own.year);
				printf("������ : %s\n", cu[i].own.office);
				printf("-----------------------------\n");
			}

			break;
		case 3:
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
	printf("������ ���� ���α׷� v1.5\n");
	printf("---------------------------\n");
	printf("1. �� �� ���� ���� �Է�\n");
	printf("2. �� �� ���� ���� ����\n");
	printf("3. ����\n");
	printf("---------------------------\n");
	printf("�޴� ���� : \n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}