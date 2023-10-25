#include <stdio.h>

int main()
{

	//상수변수 :const가 변수 앞에 붙음.(재사용 불가)
	int result;
	int num1, num2, num3;// 일반변수 : 재사용 가능



	printf("세개 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d +%d =%d \n", num1, num2, num3, result);

	//printf("세개 정수 입력 : ");
	//sizeof(num1) : num1 변수의 크기.

	/*scanf_s("%d %d %d", &num1, &num2, &num3,
		sizeof(num1), sizeof(num2), sizeof(num3));
	result = num1 + num2 + num3;
	printf("%d + %d +%d =%d \n", num1, num2, num3, result);*/

	//
	
	printf("1번쨰 정수 입력 :");
	scanf_s("%d", &num1);
	printf("2번째 정수 입력 :");
	scanf_s("%d", &num2);
	printf("3번째 정수 입력 :");
	scanf_s("%d", &num3);
	int re;
	re = num1 + num2 + num3;

	printf("%d+%d+%d =%d\n", num1, num2, num3, re);

	//상수변수
	const int n = 100;
	int n2 = 200;
	n2 = 300; // 일반변수는 값을 변경 가능.
	//n = 500; // 상수변수는 값 변경불가.


	return 0;

}