#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void customer_write();
void customer_read();
void customer_write1();


typedef struct _CAR {
	char model[20];
	char price[20];
	int year;

}CAR;

typedef struct _CUS {
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}cust;
cust inf_arr[10] = { 0 };


char* model[5] = { "������911","���׽ý�","�ҳ�Ÿ","�ƹݶ�" ,"k9" };
char* price[5] = { "4õ����","5õ����", "7õ����", "8õ����", "1���" };
int year[5] = { 2019,2020,2021,2022,2023 };

char* name[5] = { "���켺", "������", "�̺���", "������", "�ں���" };
char* tel[5] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "010-4134-4587" };
char* addr[5] = { "�뱸", "����", "�λ�", "����", "��õ" };

int main()
{

	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			customer_write1();
			break;
		case 2:
			customer_write();
			break;
		case 3:
			customer_read();
			break;
		case 4:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
			break;
		}
	}
}


int main_menu() {
	printf("-----------------\n");
	printf("�� ���� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. �� ���� ���� �Է�\n");
	printf("2. �� ���� ���� �Է�\n");
	printf("3. �� ���� ����\n");
	printf("4. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}


void customer_write()
{
	srand(time(NULL));
	FILE* fp = fopen("customer.bin", "ab");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return ;
	}
	for (int i = 0; i < 5; i++) {
		strcpy(inf_arr[i].name, name[rand() % 5]);
		strcpy(inf_arr[i].tel, tel[rand() % 5]);
		strcpy(inf_arr[i].addr, addr[rand() % 5]);
		strcpy(inf_arr[i].car.model, model[rand() % 5]);
		strcpy(inf_arr[i].car.price, price[rand() % 5]);
		inf_arr[i].car.year = year[rand() % 5];

		fwrite(&inf_arr[i], sizeof(cust), 1, fp);
	}
	fclose(fp);
	printf("������ �����Ͱ� ���Ͽ� ����Ǿ����ϴ�.\n");
}

void customer_read()
{
	srand(time(NULL));
	FILE* fp = fopen("customer.bin", "rb");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return ;
	}
	for (int i = 0; i < 10; i++) {
		printf("�̸�:%s\n", inf_arr[i].name);
		printf("��ȣ:%s\n", inf_arr[i].tel);
		printf("�ּ�:%s\n", inf_arr[i].addr);
		printf("������ : %s\n", inf_arr[i].car.model);
		printf("���� : %s\n", inf_arr[i].car.price);
		printf("���� : %d\n", inf_arr[i].car.year);
		printf("--------------------------\n");
		cust temp = { 0 };
		while (fread(&inf_arr, sizeof(cust), 2, fp) == 1) {
			printf("�̸� : %s ��ȭ ��ȣ: %s �ּ� : %s ������ : %s ����: %s ���� : %d\n", temp.name, temp.tel, temp.addr,
				temp.car.model, temp.car.price, temp.car.year);

		}
		fclose(fp);
	}
}

void customer_write1() {
	FILE* fp;
	cust cus1 = { 0 };
	fp = fopen("customer.bin", "ab");
	printf("�̸� :");
	scanf("%s", cus1.name);
	//getchar();
	printf("��ȭ��ȣ :");
	scanf(" %s", &cus1.tel); // %s�ڿ� %c�� ���Ͱ��� �ԷµǸ� %c�� �ԷµǾ� �����⿡ �Ѿ�� ���� �����ϱ� ���� ���� ���.
	printf("�ּ�:");
	scanf("%s", &cus1.addr);
	printf("������ : ");
	scanf("%s", &cus1.car.model);
	printf("���� : ");
	scanf("%s", &cus1.car.price);
	printf("���� : ");
	scanf("%d", &cus1.car.year);
	fwrite((void*)&cus1, sizeof(cus1), 1, fp); //(void*)��������.
	fclose(fp);

}

