#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h> //system �Լ� ���� �߸� �߰�.


int main()
{ //�Ĵ� �޴� �ڵ��ֹ� ���α׷�.

	//while (1) {
	//	system("cls");	//	cls: ȭ���� û���ϴ� ��ɾ�
	//	printf("-----------------\n");
	//	printf("�Ĵ� �޴� �ڵ� �ֹ� ���α׷�\n");
	//	printf("------------------\n");
	//	printf("a.��ġ� : 5000��\n");
	//	printf("b.Į���� : 4000��\n");
	//	printf("c.����� : 3000��\n");
	//	printf("d.�δ�� : 5500��\n");
	//	printf("e.��ġ� : 5000��\n");
	//	printf("x.���α׷� ����\n");
	//	printf("-----------------\n");

	//	char me = 0;
	//	scanf(" %c", &me);

	//	if (me == 'x') {
	//		printf("���α׷� ����\n");
	//		break;
	//	}
	//	switch (me) {
	//	case 'a': case 'A':
	//		printf("��ġ�\n");
	//		break;
	//	case 'b': case 'B':
	//		printf("Į����\n");
	//		break;
	//	case 'c': case 'C':
	//		printf("�����\n");
	//		break;
	//	case 'D': case 'd':
	//		printf("�δ��\n");
	//		break;
	//	case 'E': case 'e':
	//		printf("��ġ�\n");
	//		break;
	//	//case'x':
	//	//	printf("���� �����մϴ�.\n");
	//	//	exit(0); // ������ ���� ���� exit �Լ�. ���� ���α׷� ���� �Լ�.
	//	}
	//	system("pause"); // ���� �Ͻ�����. �ܺ����α׷��� c��� ������ ���۽�Ű�� �Լ�. system�Լ�.
	//}



	printf("-----------------\n");
	printf("���� ���Ǳ� ���α׷�\n");
	printf("------------------\n");
	printf("a.�Ŀ����̵�\n");
	printf("b.��ī�ݶ�\n");
	printf("c.������η���\n");
	printf("d.���\n");
	printf("e.��ī�ݶ�����\n");

	char ade = 0;


	printf("���̵� ����\n");
	scanf("%c", &ade);
	switch (ade) {
	case 'a': case 'A':
		printf("�Ŀ����̵�\n");
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
	default:
		printf("�߸��� �޴� ����!\n");
	}

	printf("---------------\n");

	//int result = 0;
	int money = 0;
	/*int a = 1500;
	int b = 1300;
	int c = 1500;
	int d = 1300;
	int e = 1500;

	result = money - a;
	result = money - b;
	result = money - c;
	result = money - d;
	result = money - e;*/


	printf("�ݾ��� �Ա��ϼ��� :");
	scanf("%d", &money);
	switch (ade) {

	case 'a': case 'A':
		// ���� �ҽ��ڵ忡 ���� ǥ���ϴ� ��� - �ϵ� �ڵ�(hard coding) 
		// �ϵ� �ڵ� ����� ��ȿ���� --> ���� �̿��� ȿ����.
		printf("�Ŀ����̵� �����ϼ̽��ϴ�.\n");
		printf("�Ž����� %d�� ��������\n", money - 1500);
		break;
	case 'b': case 'B':
		printf("��ī�ݶ� �����ϼ̽��ϴ�.\n");
		printf("�Ž����� %d�� ��������\n", money - 1300);
		break;
	case 'c': case 'C':
		printf("������η��� �����ϼ̽��ϴ�.\n");
		printf("�Ž����� %d�� ��������\n", money - 1500);
		break;
	case 'D': case 'd':
		printf("��� �����ϼ̽��ϴ�.\n");
		printf("�Ž����� %d�� ��������\n", money - 1300);
		break;
	case 'E': case 'e':
		printf("��ī�ݶ����� �����ϼ̽��ϴ�.\n");
		printf("�Ž����� %d�� ��������\n", money - 1500);
		break;
	}

	// ���� : ������ �����ϴ� ����.
	// ���� : ����(����, �Ǽ�), ����(����, ���ڿ�)
	// ���� : int(%d), �Ǽ�: float(%f) double(%lf) , ���� : char(%c)
	// ������ : %(������), ��(����)������, ��������
	// ��� : printf �Լ�, �Է� : scanf �Լ�
	// �ݺ��� : for, while, do-while
	// ��� : if, switch








}