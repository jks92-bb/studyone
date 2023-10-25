#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;

	printf("1이상 5이하의  정수 입력 : ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("1은 one \n");
		break;
	case 2:
		printf("2는 two \n");
		break;
	case 3:
		printf("3은 three \n");
		break;
	case 4:
		printf("4는 four \n");
		break;
	case 5:
		printf("5는 five \n");
		break;
	default:
		printf("i don't know!\n");
		// break 각 case에 없을시 12345 i dont know까지 표시.

	}
	return 0;
}
