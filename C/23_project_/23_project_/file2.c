#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
#include <Windows.h> // win 32 api ��� (������ ȯ�濡���� ��밡��)
#include <conio.h>
int main_menu();
void title();
void gotoxy(int x, int y);


#define RAND_SIZE 10

typedef enum {
	NOCURSOR,		//Ŀ�� ����
	SOLID_CURSOR,	// SOLID ����
	NORMAL_CURSOR	// �Ϲ� ����
}CURSOR_TYPE;

typedef enum {
		BLUE,
		BLACK,
		GREEN,
		CYAN,
		RED,
		GRAY,
		YELLOW,
		PURPLE,
		LIGHT_BLUE,
		LIGHT_BLACK,
		LIGHT_GREEN,
		LIGHT_CYAN,
		LIGHT_RED,
		LIGHT_GRAY,
		LIGHT_YELLOW,
		LIGHT_PURPLE
}FONT_COLOR;

typedef struct _STOCK
{
	int number;
	char name[20];
	int amount;

}stock;

typedef struct _COMPANY
{
	char name2[20];
	char score[20];
	stock own;
}company;

stock invest[10] = { 0 };
const int number[] = { 1, 2, 3, 4, 5 };
char* name2[] = { "APPLE","Samsung Electronics","Lockheed Martin Corporation","META","Bank of America"};
const int amount[] = { 10, 50, 100, 200, 300 };
const char *name[] = { "������", "�̼���", "������","���޼�" };
const char* score[] = { "345����","25����","70����", "40����","20����" };


void title()
{
	int x = 6;
	int y = 4;
	gotoxy(x, y + 0); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
	gotoxy(x, y + 1); printf("��\t\t\t\t\t��");
	gotoxy(x, y + 2); printf("��                                        ��");
	gotoxy(x, y + 3); printf("��                                        ��");
	gotoxy(x, y + 4); printf("��                                        ��");
	gotoxy(x, y + 5); printf("��                                        ��");
	gotoxy(x, y + 6); printf("��                                        ��");
	gotoxy(x, y + 7); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
	gotoxy(x + 14, y + 4); printf("������Ʈ ��¥ : ");
	gotoxy(x + 14, y + 5); printf("�ۼ��� : ");
	gotoxy(x, y + 12); printf("��� �����Ͻ÷��� �ƹ�Ű�� �����ÿ�\n");

}

void gotoxy(int x, int y) 
{
	COORD pos = { x,y };
	//������ �ֿܼ��� Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}