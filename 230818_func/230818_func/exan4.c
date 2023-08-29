#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int calculate(int a, int b, char c);

int main()
{
	// 1. 정수 2개와 사칙연산자를 main()에서 입력받음
	// 2. 사칙연산자는 문자로 입력받음 . (+, -, x,/)
	// 3. 3개의 정보를 매개변수로 전달
	// 4. 계산 결과값을 리턴하여 main()에서 출력하기.

	// scanf함수에서 숫자입력 후 문자 입력시에는 " %c"사용

	printf("정수 사칙연산자 정수를 순서대로 입력하시오.\n");

	int a = 0, b = 0;
	char c = 0;
	scanf("%d  %c %d", &a, &c, &b);
	printf("값 : %d", calculate(a, b, c));

}

int calculate(int a, int b, char c)
{

	if (c == '+') {
		return a + b;
	}
	else if (c == '-') {
		return a - b;
	}
	else if (c == 'x') {
		return a * b;
	}
	else if (c == '/') {
		return a / b;
	}
	
}