#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 0;

	printf("A ~ E ���� �Է� : ");
	scanf("%c", &c);
	switch (c)
	{
	case 'A': case'a':
		printf("A�� one \n");
		break;
	case 'B':
		printf("B�� two \n");
		break;
	case 'C':
		printf("C�� three \n");
		break;
	case 'D':
		printf("D�� four \n");
		break;
	case 'E':
		printf("E�� five \n");
		break;
	default:
		printf("i don't know!\n");
		// break �� case�� ������ 12345 i dont know���� ǥ��.

	}
	return 0;
}
