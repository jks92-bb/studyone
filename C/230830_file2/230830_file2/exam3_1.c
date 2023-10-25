#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void customer_write(char filename[]);
void customer_read(char filename[]);
void customer_write1(char filename[]);
void del_all_cust(char filename[]);

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
	char filename[] = "customer.bin";

	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			customer_write1(filename);
			break;
		case 2:
			customer_write(filename);
			break;
		case 3:
			customer_read(filename);
			break;
		case 4:
			del_all_cust(filename);
			break;
		case 5:
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
	printf("4. �� ���� ��ü ����\n");
	printf("5. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void customer_write(char filename[])
{
	srand(time(NULL));
	FILE* fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return -1;
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

void customer_read(char filename[])
{
	srand(time(NULL));
	FILE* fp = fopen("filename", "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ���� \n");
		return -1;
	}
	cust temp = { 0 };
	while (fread(&temp, sizeof(cust), 1, fp) == 1) {
		printf("�̸� : %s ��ȭ ��ȣ: %s �ּ� : %s ������ : %s ����: %s ���� : %d\n", temp.name, temp.tel, temp.addr,
			temp.car.model, temp.car.price, temp.car.year);
		printf("============================================================\n");

	}
	fclose(fp);
}

void customer_write1(char filename[]) {
	FILE* fp;
	cust cus1 = { 0 };
	printf("�̸� :");
	scanf("%s", cus1.name);
	printf("��ȭ��ȣ :");
	scanf(" %s", cus1.tel); // %s�ڿ� %c�� ���Ͱ��� �ԷµǸ� %c�� �ԷµǾ� �����⿡ �Ѿ�� ���� �����ϱ� ���� ���� ���.
	getchar();
	printf("�ּ�:");
	gets(cus1.addr); //������ �Է¹ޱ� ���� ���
	printf("������ : ");
	scanf("%s", cus1.car.model);
	printf("���� : ");
	scanf("%s", cus1.car.price);
	printf("���� : ");
	scanf("%d", &cus1.car.year);

	fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return-1;
	}
	fwrite((void*)&cus1, sizeof(cus1), 1, fp); //(void*)��������.
	fclose(fp);

}

void del_all_cust(char filename[]) {
	FILE* fp = fopen("filename", "wt");
	fclose(fp);
	printf("��ü �����͸� �����߽��ϴ�.");
}