#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
#include <Windows.h> // win 32 api 사용 (윈도우 환경에서만 사용가능)
#include <conio.h>
int main_menu();
void title();
void gotoxy(int x, int y);


#define RAND_SIZE 10

typedef enum {
	NOCURSOR,		//커서 없음
	SOLID_CURSOR,	// SOLID 형태
	NORMAL_CURSOR	// 일반 형태
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
const char *name[] = { "김찬수", "이순신", "한지민","오달수" };
const char* score[] = { "345만원","25만원","70만원", "40만원","20만원" };

int main()
{
	title();
	while (1) {
		switch (main_menu()) {
		case 1:


		case 2:

		case 4:
			printf("program exit\n");
			exit(0);
			break;
		}


	}


}


int main_menu() {

	printf("-----------------\n");
	printf("회사 관리 프로그램v1.0\n");
	printf("-----------------\n");
	printf("1. 회사 자동 생성\n");
	printf("2. 회사 전체 삭제\n");
	printf("3. 회사 보기\n");
	printf("4. 종료\n");
	printf("-----------------\n");
	printf("메뉴선택\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void title()
{
	int x = 6;
	int y = 4;
	gotoxy(x, y + 0); printf("★★★★★★★★★★★★★★★★★★★★★★");
	gotoxy(x, y + 1); printf("★\t\t\t\t\t★");
	gotoxy(x, y + 2); printf("★                                        ★");
	gotoxy(x, y + 3); printf("★                                        ★");
	gotoxy(x, y + 4); printf("★                                        ★");
	gotoxy(x, y + 5); printf("★                                        ★");
	gotoxy(x, y + 6); printf("★                                        ★");
	gotoxy(x, y + 7); printf("★★★★★★★★★★★★★★★★★★★★★★");
	gotoxy(x + 14, y + 4); printf("업데이트 날짜 : ");
	gotoxy(x + 14, y + 5); printf("작성자 : ");
	gotoxy(x, y + 12); printf("계속 진행하시려면 아무키나 누르시오\n");

}

void gotoxy(int x, int y) 
{
	COORD pos = { x,y };
	//윈도우 콘솔에서 커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}