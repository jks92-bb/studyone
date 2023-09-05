#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"

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