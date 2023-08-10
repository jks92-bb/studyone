//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("구구단: ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%dx%d = %d \n", dan, num, dan*num);
		num++;
	}
	printf("프로그램 종료\n");
	return 0;
}