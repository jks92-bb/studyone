#ifndef __UI_H_
#define __UI_H_

typedef enum {
	NOCURSOR,		// 커서 없앰		0
	SOLID_CURSOR,	// solid 형태	1
	NORMAL_CURSOR	// 일반 형태		2
} CURSOR_TYPE;

typedef enum { // 색깔 설정.
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

void gotoxy(int x, int y); //좌표 함수.
void title(); // 타이틀 함수.
void set_cursor_type(CURSOR_TYPE type); // 커서 타입 함수 사용.
void font_color(FONT_COLOR color); // 폰트 컬러 함수 사용

#endif