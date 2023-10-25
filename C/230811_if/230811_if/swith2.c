#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 0;

	printf("A ~ E 문자 입력 : ");
	scanf("%c", &c);
	switch (c)
	{
	case 'A': case'a':
		printf("A은 one \n");
		break;
	case 'B':
		printf("B는 two \n");
		break;
	case 'C':
		printf("C은 three \n");
		break;
	case 'D':
		printf("D는 four \n");
		break;
	case 'E':
		printf("E는 five \n");
		break;
	default:
		printf("i don't know!\n");
		// break 각 case에 없을시 12345 i dont know까지 표시.

	}
	return 0;
}
