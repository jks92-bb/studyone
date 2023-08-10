//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{

	for (int cur = 2; cur < 10; cur++)

	{
		printf("\n");
		printf("%d´Ü\n \n", cur);

		for (int is = 1; is < 10; is++)
		{
			printf("%dx%d=%d\n", cur, is, cur * is);
		}

		//printf("%d´Ü\n",cur);
	}
}