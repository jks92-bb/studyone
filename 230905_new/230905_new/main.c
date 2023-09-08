// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api ��� (������ ȯ�濡���� ��� ����)
#include <conio.h>
#include "menu.h"
#include "ui.h"
#include "file.h"
#include "rdata.h"
// #define NOCURSOR			0
// #define SOLID_CURSOR		1
// #define NORMAL_CURSOR	2

int main()
{
	char file[] = "address.bin"; //  �迭������ ������ file�̸��� "address.bin" �ۼ�.
	srand(time(NULL));	// ���� �Լ� ����� ���� �õ� ����.
	font_color(LIGHT_GREEN); // ��Ʈ Į�� ����.
	set_cursor_type(NOCURSOR); // Ŀ�� ��Ÿ�� ����.
	title();
	_getch();

	system("cls");
	font_color(LIGHT_GREEN);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		int m = main_menu();
		switch (m) {
		case MAIN_RAND_INS: {
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
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };
			printf("ID : ");
			scanf("%d", &ad.id);

			printf("�̸� : ");
			scanf(" %s  ", ad.name);

			printf("��ȭ : ");
			scanf(" %s  ", ad.tel);

			printf("�ּ� : ");
			getchar(  );
			gets(ad.addr);

			printf("email : ");
			scanf("%s", ad.email);
			file_write_direct(ad, file); // file->�ּҿ� ���� ���� ad-> ���� ���� ����
			printf("�����͸� �Է����Դϴ�.....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:
		{
			file_dele_all(file);
			printf("�����͸� �����ϴ� ���Դϴ�....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break; }
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH://�˻�-�̸�
		{
			while (1) {
				//�Ⱦ��� ���� "" char. �Ⱦ��� ���� -1, 0 int.
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("�̸��˻� :");
					scanf("%s", name);
					file_search(file, name, EMAIL_EMPTY, ID_EMPTY);
					system("pause");
					
				}
				else if (submenu == 2) {
					int id = 0;
					printf("id�˻� :");
					scanf("%d", &id);
					file_search(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");
					
				}
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("e-mail�˻� :");
					scanf("%s", email);
					file_search(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");
					
				}
				else if (submenu == 4) {
					break;
				}
			}
			break;
		}
		case MAIN_DELETE://����

		{
			printf("������ �̸� �Է�:");
			char name[20];
			scanf("%s", name);
			printf("%s ���� ���Դϴ�.\n", name);
			file_delete3(file, name);
			Sleep(1000);
			system("pause");
			break;
		}

		case MAIN_UPDATE://����
		{
			printf("�˻��� �̸� �Է�: ");
			char sname[20];
			scanf("%s", sname);
			printf("������ �̸� �Է�: ");
			char dname[20];
			scanf("%s", dname);
			printf("%s��(��) %s(��)�� ���� ���Դϴ�.\n", sname, dname);
			file_update(file, sname, dname);
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_EXIT:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");


		}
		system("cls");
	}
}

