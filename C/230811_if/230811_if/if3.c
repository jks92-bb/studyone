#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	if (num < 0)
		printf("�Է°��� 0���� �۴�.\n");
	else
		printf("�Է°��� 0���� ���� �ʴ�.\n");

	if (num == 0)
		printf("�Է°��� 0�̴�.\n");
	else if (num < 0)
		printf("�Է°��� 0�� �ƴϴ�.\n");
	else if (num > 0 && num < 100)
		printf("�Է°��� 0���� ũ�� 100���� �۴�.\n");
	else
		printf("�Է°��� %d�̴�.\n", num);



	return 0;
}