#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int show_num();

void main()
{
	// 1~5���� ���������� �Ű������� �����Ͽ� 
	// ����ϴ� �Լ��ۼ�
		//int a = 1;
	for (int a = 1; a <= 5; a++) {
		show_num(a);
	}
}

int show_num(int t)
{
	int n = t;
	printf("�Լ� ������� : %d\n", n);
}