#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	// 1) ������ ����.
	// 1. 2���� ���ڸ� �Է¹ް�, ���� +, -, *, / �� �Է¹���.
	// 2. ��� ���´� �Ʒ� ����.
	// <<<�Է� ����>>>
	// 1��° ���� �Է� : 10
	// 2��° ���� �Է� : 20
	// ������ �Է�(+, -, *,/) : +
	// 
	// <<<��� ����>>>
	// 10 + 20= 30
	// 

	//������ ���ڸ� �Է��ϰ� ����Ű�� ġ�� ����Ű ���� o������ �ڵ����� ����Ǿ����� ���� �߻�.
	//�ذ��� : " %c" -> %c �տ� ���� 1ĭ ����.
	double num1, num2, result = 0;
	char op;

	printf("����� �� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);

	printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
	//scanf(" %c", &op); // ������ �����Ͽ� �Է� ����
	scanf(" %c", &op);
	if (op == '+') {
		result = num1 + num2;
		printf("���: %lf\n", result);
	}
	else if (op == '-') {
		result = num1 - num2;
		printf("���: %lf\n", result);
	}
	else if (op == '*') {
		result = num1 * num2;
		printf("���: %lf\n", result);
	}
	else if (op == '/') {
		result = num1 / num2;
		printf("���: %lf\n", result);
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

	// 2)���� �����ϴ� ���α׷�.
	// 1. �Է��� �⵵�� 4�� ������ �������� 0�̰�, 100���� ������ 0�� �ƴ�. -> ����
	// 2. �Է��� �⵵�� 400���� ������ �������� 0 -> ����

	int year;
	printf("�⵵ �Է� :");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d�� ����\n", year);
	}
	else if (year % 400 == 0) {
		printf("%d�� ����\n", year);
	}
	else {
		printf("%d�� ������ �ƴϴ�. \n");
	}

	if ((year % 4 == 0 && year%100 != 0) || (year % 400 == 0)) {
		printf("%d�� �����̴�.\n");
	}
	else {
		printf("%d�� ������ �ƴϴ�. \n");
	}

	/*int y = 0;


	scanf("%d\n", &y);

	int q = y / 4;
	int e = y / 100;
	int w = y / 400;
	if (q == 0 && e != 0) {
		printf("%d�� �����̴�.\n", y);
	}

	else if (w == 0) {
		printf("%d�� �����̴�.\n", y);
	}
	else {
		printf("%d�� ������ �ƴϴ�.\n", y);
	}*/





}