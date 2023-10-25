#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	// 1) 간단한 계산기.
	// 1. 2개의 숫자를 입력받고, 문자 +, -, *, / 를 입력받음.
	// 2. 출력 형태는 아래 참고.
	// <<<입력 예시>>>
	// 1번째 숫자 입력 : 10
	// 2번째 숫자 입력 : 20
	// 연산자 입력(+, -, *,/) : +
	// 
	// <<<출력 예시>>>
	// 10 + 20= 30
	// 

	//위에서 숫자를 입력하고 엔터키를 치면 엔터키 값이 o변수에 자동으로 저장되어지는 오류 발생.
	//해결방법 : " %c" -> %c 앞에 공백 1칸 넣음.
	double num1, num2, result = 0;
	char op;

	printf("계산할 두 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);

	printf("연산자를 입력하세요 (+, -, *, /): ");
	//scanf(" %c", &op); // 공백을 포함하여 입력 받음
	scanf(" %c", &op);
	if (op == '+') {
		result = num1 + num2;
		printf("결과: %lf\n", result);
	}
	else if (op == '-') {
		result = num1 - num2;
		printf("결과: %lf\n", result);
	}
	else if (op == '*') {
		result = num1 * num2;
		printf("결과: %lf\n", result);
	}
	else if (op == '/') {
		result = num1 / num2;
		printf("결과: %lf\n", result);
	}


	switch (op) {
	case '+':
		result = num1 + num2;
		printf("%lf + %lf = %lf\n", num1, num2, result);
		break;
	case'-':
		result = num1 - num2;
		printf("%d - %d = %d\n", num1, num2, result);
		break;
	}

	// 2)윤년 구분하는 프로그램.
	// 1. 입력한 년도를 4로 나누면 나머지가 0이고, 100으로 나누면 0이 아님. -> 윤년
	// 2. 입력한 년도를 400으로 나누면 나머지가 0 -> 윤년

	int year;
	printf("년도 입력 :");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d는 윤년\n", year);
	}
	else if (year % 400 == 0) {
		printf("%d는 윤년\n", year);
	}
	else {
		printf("%d는 윤년이 아니다. \n");
	}

	if ((year % 4 == 0 && year%100 != 0) || (year % 400 == 0)) {
		printf("%d는 윤년이다.\n");
	}
	else {
		printf("%d는 윤년이 아니다. \n");
	}

	/*int y = 0;


	scanf("%d\n", &y);

	int q = y / 4;
	int e = y / 100;
	int w = y / 400;
	if (q == 0 && e != 0) {
		printf("%d는 윤년이다.\n", y);
	}

	else if (w == 0) {
		printf("%d는 윤년이다.\n", y);
	}
	else {
		printf("%d는 윤년이 아니다.\n", y);
	}*/





}