#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;

	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0) {
			//if(n%2==0 && n%3 ==0 ) {//2의 배수이자 동시에 3의 배수
			continue;
		}
			printf("%d ", num);
	}
	printf("end!\n");
	return 0;
}
