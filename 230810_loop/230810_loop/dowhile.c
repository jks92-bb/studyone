//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int total = 0, num = 0;
	do
	{
		printf("���� �Է�(0 to quit):");
		scanf("%d", &num);
		total += num; //0�� �ƴ� ���ڵ��� ���� ����.

	} while (num != 0);
	printf("�հ� : %d\n", total);
	return 0;
}