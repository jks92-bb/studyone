#include <stdio.h>

int main()
{
	float num1 = 10, num2 = 2;
	printf("%f+%f=%f \n", num1, num2, num1 + num2);
	//printf("%d-%d=%d\n", num1, num2, num1 - num2);
	//printf("%dx%d =%d\n", num1, num2, num1 * num2);
	//printf("%d/%d = %d \n", num1, num2, num1 / num2);
	//printf("%d÷%d = %d \n", num1, num2, num1 % num2);
	//printf("%d÷%d = %d \n", num1, num2, num1 % num2);
	//printf("%d + %d = %d \n", num1, num2, num1 + num2);
	//printf("%d + %d + %d= %d\n", num1, num2, num2, num1+num2+num2);
	//printf("%d + %d/%d = %d\n", num1, num2, num2, num1 + num2 / num2);
	printf("%f + %f/%f/%f + %fx%f= %f \n", num1, num2,num2, num1, num2, num2, num1 + num2 / num2/ num1 + num2 * num2);
	////일반계산기는 연산자 우선순위 무시. 공학용 계산기 연산자 우선순위 사용.
}