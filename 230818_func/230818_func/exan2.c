#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_day(int i);


void main()
{
	// main()���� 1~7������ ���ڸ� �Է¹޾Ƽ�
	// �����Ͽ� �Ű������� ����
	// 1�̸�, ������ ���.
	// 2�̸�, ȭ���� ���.
	//...
	// 7�̸�,  
	//show_day()
	printf("���ڸ� �Է��ϼ���.\n");
	int i=0;
	scanf("%d",&i);

	show_day(i); // show_day �Լ� ȣ��(����)
	

}

void show_day(int i)
{
	if (i == 1) {
		printf("������\n");
	}
	else if (i == 2) {
		printf("ȭ����\n");
	}
	else if (i == 3) {
		printf("������\n");
	}
	else if (i == 4) {
		printf("�����\n");
	}
	else if (i == 5) {
		printf("�ݿ���\n");
	}
	else if (i == 6) {
		printf("�����\n");
	}
	else {
		printf("�Ͽ���\n");
	}
}