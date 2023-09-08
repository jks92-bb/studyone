#include <stdio.h>
#include "ui.h"
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) { // 윈도우 콘솔을 이용하여 커서 위치 시키는 함수작성
	COORD pos = { x, y };
	// 윈도우 콘솔에서 커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type) { // 커서 타입 함수.
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
	// 커서 타입을 설정(win32 api)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color) {
	//폰트에 색상적용
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void title() // 프로그램 타이틀 함수를 표현.
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x, y + 1); printf("■								   ■");
	gotoxy(x, y + 2); printf("■								   ■");
	gotoxy(x, y + 3); printf("■								   ■");
	gotoxy(x, y + 4); printf("■								   ■");
	gotoxy(x, y + 5); printf("■								   ■");
	gotoxy(x, y + 6); printf("■								   ■");
	gotoxy(x, y + 7); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x + 12, y + 2); printf("주소록 관리 프로그램 v1.5");
	gotoxy(x + 33, y + 4); printf("개발날짜 : 2023.09.01");
	gotoxy(x + 33, y + 5); printf("개발자   : JKS");
	gotoxy(x, y + 12); printf("메인화면 이동은 아무키나 누르세요!\n");
}