//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int cut = 2;
	int is = 0;

	while (cut < 10)	// 2단부터 9단까지 반복
	{
		is = 1; //  새로운 단의 시작을 위해서
		while (is < 10) //각 단의 1부터 9의 곱을 표현
		{
			printf("%dx%d=%d \n", cut, is, cut * is);
			is++;
		}
		cut++;;//다음 단으로 넘어가기 위한 증가.
	}
}