#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ //�Ĵ� �޴� �ڵ��ֹ� ���α׷�.


	/*printf("-----------------\n");
	printf("�Ĵ� �޴� �ڵ� �ֹ� ���α׷�\n");
	printf("------------------\n");
	printf("a.��ġ� : 5000��\n");
	printf("b.Į���� : 4000��\n");
	printf("c.����� : 3000��\n");
	printf("d.�δ�� : 5500��\n");
	printf("e.��ġ� : 5000��\n");
	printf("-----------------\n");

	char me = 0;
	scanf("%c", &me);
	switch (me) {
	case 'a': case 'A':
		printf("��ġ�\n");
		break;
	case 'b': case 'B':
		printf("Į����\n");
		break;
	case 'c': case 'C':
		printf("�����\n");
		break;
	case 'D': case 'd':
		printf("�δ��\n");
		break;
	case 'E': case 'e':
		printf("��ġ�\n");
		break;
	}*/


	printf("-----------------\n");
	printf("���� ���Ǳ� ���α׷�\n");
	printf("------------------\n");

	char ade = 0;


	int result = 0;
	int money = 0;
	int a = 1500;
	int b = 1300;
	int c = 1500;
	int d = 1300;
	int e = 1400;

	
	result = money - b;
	result = money - c;
	result = money - d;
	result = money - e;


	scanf("%c", &ade);
	switch (ade) {
	case 'a': case 'A':
		printf("�Ŀ����̵�\n");
		scanf("%d", &money);
		switch (ade) {
		case 'a': case 'A':
			result = money - a;
		}
		printf("�Ž������� %d�̴�", result);
		break;
	case 'b': case 'B':
		printf("��ī�ݶ�\n");
		break;
	case 'c': case 'C':
		printf("������η���\n");
		break;
	case 'D': case 'd':
		printf("���\n");
		break;
	case 'E': case 'e':
		printf("��ī�ݶ�����\n");
		break;
	}









}