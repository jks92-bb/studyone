//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()

{	//반복문은 0부터 시작하는게 좋다.
	int num = 0;
	while (num < 5)
	{
		printf("hello %d \n", num);
		num++;
	}
	return 0;
	}