#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"

int main_menu() {

	printf("-----------------\n");
	printf("주식 관리 프로그램v1.0\n");
	printf("-----------------\n");
	printf("1. 주식 목록 작성\n");
	printf("2. 주식 전체 삭제\n");
	printf("3. sector\n");
	printf("4. 자금 보기\n");
	printf("5. 데이터 전체 삭제\n");
	printf("6. 종료\n");
	printf("-----------------\n");
	printf("메뉴선택\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

int menu_3()
{
	printf("==============================================\n");
	printf("==========1. energy==========\n");					// 에너지 섹터
	printf("=========2. technology==========\n");				// 기술 섹터		
	printf("==========3. financial==========\n");				// 금융 섹터
	printf("==========4. communication service==========\n");	// 
	printf("==========5. ==========\n");			// 
	printf("==========6. ==========\n");
	printf("==========7. ==========\n");
	printf("==============================================\n");
	
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}