#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2, result = 0;
    char op;

    printf("����� �� ���ڸ� �Է��ϼ���: ");
    scanf("%lf %lf", &num1, &num2);

    do {
        printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
        scanf(" %c", &op); // ������ �����Ͽ� �Է� ����

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
            if (num2 != 0) {
                result = num1 / num2;
                printf("���: %lf\n", result);
            }
            else {
                printf("0���� ���� �� �����ϴ�.\n");
            }
        }
        else if (op == 'q' || op == 'Q') { // �߰�: ���α׷� ����
            break;
        }
        else {
            printf("�ٽ� �Է� �ϼ���\n");
        }
    } while (1); // �׻� �ݺ�

    return 0;
}
