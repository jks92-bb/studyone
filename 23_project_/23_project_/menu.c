#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"

int main_menu() {

	printf("-----------------\n");
	printf("ȸ�� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. ȸ�� �ڵ� ����\n");
	printf("2. ȸ�� ��ü ����\n");
	printf("3. ȸ�� ����\n");
	printf("4. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}