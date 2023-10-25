#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;
	double num3, num4;
	// double쓰면 lf로 쓰기.

	//_CRT_SECURE_NO_WARNINGS -> scanf 오류출력에서 복사해서 붙인것들임.

	printf("정수on:");
	// 최신 visual studio에서는 scanf를 사용불가.
	// scanf_s 라는 함수로 대체되었음.
	// 하지만 C언어 표준함수는 scanf가 맞음.

	scanf("%d", &num1);  //  첫번쨰 정수 입력
	printf("정수two:");
	scanf("%d", &num2); // 두번째 정수 입력

	result = num1 + num2;
	printf("%d+ %d = %d \n", num1, num2, result);

	printf("상수on:");
	scanf("%lf", &num3);
	printf("상수two :");
	scanf("%lf", &num4);

	double resulte = num3 + num4;
	printf("%lf+%lf = %lf\n", num3, num4, resulte);
	}