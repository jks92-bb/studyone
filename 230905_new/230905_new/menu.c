#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"	// menu.c �� menu.h�� ������ ������ ���� �������� ��������̱⿡ ""

int main_menu()
{
	printf("=============================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("=============================\n");
	printf("1.�ּҷ� �ڵ� ����\n");
	printf("2.�ּҷ� ���� �Է�\n");
	printf("3.�ּҷ� ��ü ����\n");
	printf("4.�ּҷ� ����\n");
	printf("5.�ּҷ� �˻�\n");
	printf("6.�ּҷ� ����\n");
	printf("7.�ּҷ� ����\n");
	printf("8.����\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

int search_menu()
{
	printf("=============================\n");
	printf("������ �˻�\n");
	printf("=============================\n");
	printf("1.�̸����� �˻�\n");
	printf("2.ID�� �˻�\n");
	printf("3.e-mail �˻�\n");
	printf("4.���� �޴�\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;

}