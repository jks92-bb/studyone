#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1=0, num2=0;
	char operator;

	printf("계산할 두 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
		if (num1 >= 0 && num1 < 0 && num2 < 0 && num2 >= 0) {
			scanf("%lf %lf", &num1, &num2);
		}
		else {
			printf("숫자만 입력하실 수 있습니다.\n");
		}
	



	printf("연산자를 입력하세요 (+, -, *, /): ");
	scanf(" %c", &operator); // 공백을 포함하여 입력 받음

	if (operator == '+') {
		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
	}
	else if (operator == '-') {
		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
	}
	else if (operator == '*') {
		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
	}
	else if (operator == '/') {
		if (num2 != 0) {
			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
		}
		else {
			printf("0으로 나눌 수 없습니다.\n");
		}
	}
	else {
		printf("지원하지 않는 연산자입니다.\n");
	}

	return 0;
}
