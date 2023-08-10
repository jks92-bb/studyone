//loop.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()

{
	int total = 0;
	int i, num;
	printf("0ºÎÅÍ num±îÁöÀÇ µ¡¼À, numÀº?");
	scanf("%d", &num);

	
	//for (i = 1; i < num; i++)  ÀÌ·¸°Ô ¾²¸é 1ºÎÅÍ %d±îÁö µ¡¼À °á°ú°¡ ÀÌ·ç¾îÁü.
	
	for (i = 0; i < num + 1; i++)
	{
		total += i;
	}
	printf("0ºÎÅÍ %d±îÁö µ¡¼À °á°ú : %d\n", num, total);

	printf("%d\n", i);// total+=i; ÀÇ ÇØ¼®
	return 0;


}
