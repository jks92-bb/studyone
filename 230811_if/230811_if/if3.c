#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	if (num < 0)
		printf("입력값은 0보다 작다.\n");
	else
		printf("입력값은 0보다 작지 않다.\n");

	if (num == 0)
		printf("입력값은 0이다.\n");
	else if (num < 0)
		printf("입력값은 0이 아니다.\n");
	else if (num > 0 && num < 100)
		printf("입력값은 0보다 크고 100보다 작다.\n");
	else
		printf("입력값은 %d이다.\n", num);



	return 0;
}