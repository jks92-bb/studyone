#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()

{
	//	1. if는 무조건 1번만 사용
	//	2. else if는 여러개 사용 가능
	//	3. else를 사용하는 경우에는 조건이 없음.
	int num;
	printf("정수 입력 :");
	scanf("%d", &num);

	if (num < 0) {
		printf("입력 값은 0보다 작다. \n");
	}
	if (num > 0) {
		printf("입력 값은 0보다 크다.\n");
	}
	if (num == 0) {
		printf("입력 값은 0이다.\n");
	}

	//3가지 경우의 수를 적용
	if (num < 0) {
		printf("입력값은 0보다 작다.\n");
	}
	else if (num > 0) {
		printf("입력 값은 0보다 크다.\n");
	}
	else {
		printf("입력 값은 0이다.\n");
	}
	
	
	if (num < 0) {
		printf("입력값은 0보다 작다.\n");
	}
	else {
		printf("입력 값은 0보다 크거나 같다.\n");
	}
	return 0;
	}