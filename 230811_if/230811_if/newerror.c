#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("����� �� ���ڸ� �Է��ϼ���: ");
    scanf("%lf %lf", &num1, &num2);

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
