#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;

	printf("1�̻� 5������  ���� �Է� : ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("1�� one \n");
		break;
	case 2:
		printf("2�� two \n");
		break;
	case 3:
		printf("3�� three \n");
		break;
	case 4:
		printf("4�� four \n");
		break;
	case 5:
		printf("5�� five \n");
		break;
	default:
		printf("i don't know!\n");
		// break �� case�� ������ 12345 i dont know���� ǥ��.

	}
	return 0;
}
