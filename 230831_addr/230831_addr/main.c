#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void addr_write(char filename[]);
void addr_read(char filename[]);
void del_all_(char filename[]);
void addr_dir_write(char filename[]);

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];

}ADDR;

ADDR power[10] = { 0 };
const int id[] = { 111, 222, 333 ,444, 555 };
char* name[] = { "��켺", "������","�̽ÿ�","���ϴ�","������" };
char* tel[] = { "010-4567-7894","010-4561-4567","010-1234-4567","010-7894-4561","010-7894-1234" };
char* addr[] = { "�뱸 ��õ��", "�뱸 ���", "���� �Ÿ���", "���� û�㵿","���� �ѳ���" };
char* email[] = { "abc@gmail.com", "aht@gmail.com" , "fds@gmail.com" , "aewc@gmail.com" , "eqwbc@gmail.com" };

int main()
{
	char filename[] = "address.bin";
	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			addr_write(filename);
			break;
		case 2:
			addr_dir_write(filename);
			break;
		case 3:
			del_all_(filename);
			break;
		case 4:
			addr_read(filename);
			break;
		case 5:
			exit(0);
			break;

		}

	}

}

int main_menu() {
	printf("-----------------\n");
	printf("�ּҷ� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. �ּҷ� �ڵ� ����\n");
	printf("2. �ּҷ� ���� �Է�\n");
	printf("3. �ּҷ� ��ü ����\n");
	printf("4. �ּҷ� ����\n");
	printf("5. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void addr_dir_write(char filename[])
{
	ADDR ADR = { 0 };
	FILE* fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("���Ͽ��� ����\n");
		return -1;
	}
	printf("ID :");
	scanf("%d", &ADR.id);
	printf("name :");
	scanf(" %s", ADR.name);
	printf("tel :");
	scanf(" %s", ADR.tel);
	printf("addr :");
	scanf(" %s", ADR.addr);
	printf("email :");
	scanf(" %s", ADR.email);

	fwrite(&ADR, sizeof(ADR), 1, fp);
	fclose(fp);
}

void addr_write(char filename[])
{

	FILE* fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("���Ͽ��� ����\n");
		return -1;
	}
	for (int i = 0; i < 5; i++) {
		power[i].id = id[rand() % 5];
		strcpy(power[i].name, name[rand() % 5]);
		strcpy(power[i].tel, tel[rand() % 5]);
		strcpy(power[i].addr, addr[rand() % 5]);
		strcpy(power[i].email, email[rand() % 5]);

		fwrite(&power[i], sizeof(ADDR), 1, fp);

	}
	fclose(fp);
	printf("�Է¿Ϸ�\n");

}

void addr_read(char filename[])
{
	srand(time(NULL));
	FILE* fp = fopen("filename", "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ���� \n");
		return -1;
	}
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("ID : %d �̸�: %s ��ȣ : %s �ּ� : %s ����: %s \n", temp.id, temp.name, temp.tel, temp.addr, temp.email);
		printf("============================================================\n");

	}
	fclose(fp);
}

void del_all_(char filename[])
{
	FILE* fp = fopen("filename", "wb");
	if (fp == NULL) {
		printf("���Ͽ��� ����\n");
		return -1;
	}
	fclose(fp);
}

// & �����ϴ� �Ǽ� ����. ���� �ٶ�.