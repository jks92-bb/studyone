//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int cut = 2;
	int is = 0;

	while (cut < 10)	// 2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1; //  ���ο� ���� ������ ���ؼ�
		while (is < 10) //�� ���� 1���� 9�� ���� ǥ��
		{
			printf("%dx%d=%d \n", cut, is, cut * is);
			is++;
		}
		cut++;;//���� ������ �Ѿ�� ���� ����.
	}
}