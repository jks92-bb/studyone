#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()

{
	//	1. if�� ������ 1���� ���
	//	2. else if�� ������ ��� ����
	//	3. else�� ����ϴ� ��쿡�� ������ ����.
	int num;
	printf("���� �Է� :");
	scanf("%d", &num);

	if (num < 0) {
		printf("�Է� ���� 0���� �۴�. \n");
	}
	if (num > 0) {
		printf("�Է� ���� 0���� ũ��.\n");
	}
	if (num == 0) {
		printf("�Է� ���� 0�̴�.\n");
	}

	//3���� ����� ���� ����
	if (num < 0) {
		printf("�Է°��� 0���� �۴�.\n");
	}
	else if (num > 0) {
		printf("�Է� ���� 0���� ũ��.\n");
	}
	else {
		printf("�Է� ���� 0�̴�.\n");
	}
	
	
	if (num < 0) {
		printf("�Է°��� 0���� �۴�.\n");
	}
	else {
		printf("�Է� ���� 0���� ũ�ų� ����.\n");
	}
	return 0;
	}