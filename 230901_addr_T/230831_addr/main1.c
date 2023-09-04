// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api ��� (������ ȯ�濡���� ��� ����)
#include <conio.h>
// #define NOCURSOR			0
// #define SOLID_CURSOR		1
// #define NORMAL_CURSOR	2

#define RAND_SIZE 5

typedef enum {
	NOCURSOR,		// Ŀ�� ����		0
	SOLID_CURSOR,	// solid ����	1
	NORMAL_CURSOR	// �Ϲ� ����		2
} CURSOR_TYPE;

typedef enum {
	BLACK,	// 0
	BLUE,	// 1
	GREEN,	// 2
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_PURPLE,
	LIGHT_YELLOW,
	LIGHT_GRAY	// 15
} FONT_COLOR;

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "ȫ�浿", "����ġ", "������", "������", "�̼���" };
const char* tel[] = { "010-1234-1234", "010-1234-1111", "010-1234-2222",
	"010-1234-3333", "010-1234-4444" };
const char* addr[] = { "�뱸 ���� �ž�4��", "���� ���� �ž�4��" ,
	"���� ���� �ž�4��", 	"���� ���� �ž�4��", "�λ� ���� �ž�4��" };
const char* email[] = { "hong@naver.com", "joen@kakao.com",
	"kang@gmail.com", "yu@msn.com", "lee@daum.net" };

//�Լ� ���� ������Ÿ��
int main_menu();
void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);
void file_write_rand(ADDR ad[], char filename[], int len);
void file_write_direct(ADDR ad, char filename[]);
void file_dele_all(char filename[]);
void file_read(char filename[]);
void file_search(char filename[], char name[]);
void file_delete(char filename[], char delName[]);
void file_delete2(char filename[], char delName[]); //����� �ڵ�
void file_update(char filename[], char sname[], char dname[]);

int main()
{
	char file[] = "address.bin";
	srand(time(NULL));	// ���� �Լ� ����� ���� �õ� ����.
	font_color(LIGHT_GREEN);
	set_cursor_type(NOCURSOR);
	title();
	_getch();

	system("cls");
	font_color(LIGHT_GREEN);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case 1: {
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // �迭 ũ��
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);
			printf("���� �����͸� �������Դϴ�.....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;

		}
		case 2:
		{
			ADDR ad = { 0 };
			printf("ID : ");
			scanf("%d", &ad.id);

			printf("�̸� : ");
			scanf("%s", ad.name);

			printf("��ȭ : ");
			scanf("%s", ad.tel);

			printf("�ּ� : ");
			getchar();
			gets(ad.addr);

			printf("email : ");
			scanf("%s", ad.email);
			file_write_direct(ad, file); // file->�ּҿ� ���� ���� ad-> ���� ���� ����
			printf("�����͸� �Է����Դϴ�.....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;
		}
		case 3:
		{
			file_dele_all(file);
			printf("�����͸� �����ϴ� ���Դϴ�....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break; }
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5://�˻�-�̸�
		{
			char name[20] = { 0 };
			printf("�̸��˻� :");
			scanf("%s", name);
			file_search(file, name);
			system("pause");
			break;
		}
		case 6://����

		{
			printf("������ �̸� �Է�:");
			char name[20];
			scanf("%s", name);
			printf("%s ���� ���Դϴ�.\n", name);
			file_delete(file, name);
			Sleep(2000);
			system("pause");
			break;
		}

		case 7://����
		{
			printf("�˻��� �̸� �Է�: ");
			char sname[20];
			scanf("%s", sname);
			printf("������ �̸� �Է�: ");
			char dname[20];
			scanf("%s", dname);
			printf("%s��(��) %s(��)�� ���� ���Դϴ�.\n", sname, dname);
			file_update(file, sname, dname);
			Sleep(2000);
			system("pause");
			break;
		}
		case 8:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
		}
		system("cls");
	}

}

int main_menu()
{
	printf("=============================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("=============================\n");
	printf("1.�ּҷ� �ڵ� ����\n");
	printf("2.�ּҷ� ���� �Է�\n");
	printf("3.�ּҷ� ��ü ����\n");
	printf("4.�ּҷ� ����\n");
	printf("5.�ּҷ� �˻�\n");
	printf("6.�ּҷ� ����\n");
	printf("7.�ּҷ� ����\n");
	printf("8.����\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("���������������������������������");
	gotoxy(x, y + 1); printf("��								   ��");
	gotoxy(x, y + 2); printf("��								   ��");
	gotoxy(x, y + 3); printf("��								   ��");
	gotoxy(x, y + 4); printf("��								   ��");
	gotoxy(x, y + 5); printf("��								   ��");
	gotoxy(x, y + 6); printf("��								   ��");
	gotoxy(x, y + 7); printf("���������������������������������");
	gotoxy(x + 12, y + 2); printf("�ּҷ� ���� ���α׷� v1.5");
	gotoxy(x + 33, y + 4); printf("���߳�¥ : 2023.09.01");
	gotoxy(x + 33, y + 5); printf("������   : JKS");
	gotoxy(x, y + 12); printf("����ȭ�� �̵��� �ƹ�Ű�� ��������!\n");
}

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	// ������ �ֿܼ��� Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type) {
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}
	// Ŀ�� Ÿ���� ����(win32 api)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color) {
	//��Ʈ�� ��������
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write_direct(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_dele_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		exit(0);
	}
	fclose(fp);
}

void file_read(char filename[]) {
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	/*while (fread(&ad, sizeof(ADDR), 1, fp) == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		printf("�����͸� �Է����ּ���.\n");
		break;
	}*/
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		/*if (ad.id > 0) {*/
		printf("��ȣ : %d\n", count++);
		printf("ID : %d\n", ad.id);
		printf("�̸� : %s\n", ad.name);
		printf("��ȭ : %s\n", ad.tel);
		printf("�ּ� : %s\n", ad.addr);
		printf("email :%s\n", ad.email);
		printf("==========================\n");
		check = 1;
		/*}*/

	}


	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}

}

void file_search(char filename[], char name[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int check = 0;
	int count = 1;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0) {
			printf("��ȣ : %d\n", count++);
			printf("ID : %d\n", ad.id);
			printf("�̸� : %s\n", ad.name);
			printf("��ȭ : %s\n", ad.tel);
			printf("�ּ� : %s\n", ad.addr);
			printf("email :%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_delete(char filename[], char delName[])
{
	//������ ã�Ƽ� �����ϴ� �Լ� 
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int check = 0;
	int count = 1;
	int i = 0;
	// �����Ͱ� 1�� �������� ������ ���� �۴� ���� ����.
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("������ ���� : %d\n", i);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	for (int i = 0; i < 200; i++) {
		/*printf("del_arr[%d] : %d \n", del_arr[i].id);*/ //����� �뵵�� ���� �ڵ�.
		if (strcmp(del_arr[i].name, "") != 0) {
			if (del_arr[i].name != 0) {
				fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
			}
		}
		fclose(fp2);
	}
}
//static �̻��� ���� �߸� static ����. �迭 ���� ��Ÿ�� ��.

void file_delete2(char filename[], char delName[]) //����� �ڵ�
{
	//������ ã�Ƽ� �����ϴ� �Լ� 
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int check = 0;
	int count = 1;
	int i = 0;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("������ ����: %d \n", i);
	int size = i;
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� �б� ����\n");
		exit(0);
	}
	for (int i = 0; i < 200; i++) {
		if (strcmp(ad.name, "") != 0) {
			if (del_arr[i].id != 0) {
				fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
			}
		}
		fclose(fp2);
	}
}	//static �̻��� ���� �߸� static ����. �迭 ���� ��Ÿ�� ��.

void file_update(char filename[], char sname[], char dname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) { // ������ �̸��� ���ٸ�
			strcpy(del_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(del_arr[i].name, ad.name);
		}
		del_arr[i].id = ad.id;
		strcpy(del_arr[i].addr, ad.addr);
		strcpy(del_arr[i].tel, ad.tel);
		strcpy(del_arr[i].email, ad.email);
		i++;
	}
	fclose(fp);
	int size = i;
	if (check == 0) {
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return; // void �Լ� ����
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (int i = 0; i < size; i++) {
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}