#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"

int main_menu() {

	printf("-----------------\n");
	printf("�ֽ� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. �ֽ� ��� �ۼ�\n");
	printf("2. �ֽ� ��ü ����\n");
	printf("3. sector\n");
	printf("4. �ڱ� ����\n");
	printf("5. ������ ��ü ����\n");
	printf("6. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

int menu_3()
{
	printf("==============================================\n");
	printf("==========1. energy==========\n");					// ������ ����
	printf("=========2. technology==========\n");				// ��� ����		
	printf("==========3. financial==========\n");				// ���� ����
	printf("==========4. communication service==========\n");	// 
	printf("==========5. ==========\n");			// 
	printf("==========6. ==========\n");
	printf("==========7. ==========\n");
	printf("==============================================\n");
	
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}