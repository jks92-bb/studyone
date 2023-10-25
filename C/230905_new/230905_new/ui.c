#include <stdio.h>
#include "ui.h"
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) { // ������ �ܼ��� �̿��Ͽ� Ŀ�� ��ġ ��Ű�� �Լ��ۼ�
	COORD pos = { x, y };
	// ������ �ֿܼ��� Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type) { // Ŀ�� Ÿ�� �Լ�.
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

void title() // ���α׷� Ÿ��Ʋ �Լ��� ǥ��.
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