#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1=0, num2=0;
	char operator;

	printf("����� �� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
		if (num1 >= 0 && num1 < 0 && num2 < 0 && num2 >= 0) {
			scanf("%lf %lf", &num1, &num2);
		}
		else {
			printf("���ڸ� �Է��Ͻ� �� �ֽ��ϴ�.\n");
		}
	



	printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
	scanf(" %c", &operator); // ������ �����Ͽ� �Է� ����

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
			printf("0���� ���� �� �����ϴ�.\n");
		}
	}
	else {
		printf("�������� �ʴ� �������Դϴ�.\n");
	}

	return 0;
}
