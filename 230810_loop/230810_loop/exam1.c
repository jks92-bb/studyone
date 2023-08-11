//exam.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int	main()
{
	// 반복문 : 특정한 문장을 반복적으로 실행.
	
	/* 1개의 숫자를 입력받아 구구단 출력하는 프로그램.
	예) 3을 입력하면 3단 출력.

	시작값과 마지막값을 입력받아 합 구하는 프로그램.
	예) 1번째 입력 2 2번쨰 입력 5
	2+3+4+5=14
	조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.

	구구단 전체 출력(2~9단 출력)
	2x1=2   3x1=3  4x1=4 ..9x1=9
	2x2=4 .....*/
	int num = 0;

	printf("구구단 : ");
	scanf("%d", &num);
	printf("%d단\n", num);

	for (int is = 1; is < 10; is++)
	{
		printf("%dx%d=%d\n", num, is, num * is);
	}

	int n1, n2, total = 0;
	printf("시작 숫자 입력:");
	scanf("%d", &n1);
	do {
		printf("마지막 숫자 입력:");
		scanf("%d", &n2);
	} while (n2 <= n1);
	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d~%d까지 합 : %d\n", n1, n2, total);

	/*int nu = 0, nu2 = 0;
	printf("시작 : %d\n", nu);
	scanf("%d", &nu);
	while (nu>nu++)
	{
		printf("%dj")
	}*/

	/*while (int = nu1)*/

	for (int cur = 1; cur < 10; cur++) {

		//int is = 0;
		//printf("\n");
		printf("%d단\n", cur);
		
		for (int is = 2; is < 10; is++)
		{
			//printf("%d단\n", cur);
			printf("%dx%d=%d\t", is, cur, cur * is);
		}
		printf("\n");
	}
	return 0;





}
