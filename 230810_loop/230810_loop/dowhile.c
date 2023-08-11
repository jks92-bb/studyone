//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()// do while  먼저 한번 실행하고 조건 체크
{
	int total = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit):");
		scanf("%d", &num);
		total += num; //0이 아닌 숫자들의 합을 구함.

	} while (num != 0);
	printf("합계 : %d\n", total);
	return 0;
}