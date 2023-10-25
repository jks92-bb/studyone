#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2, result = 0;
    char op;

    printf("����� �� ���ڸ� �Է��ϼ���: ");
    scanf("%lf %lf", &num1, &num2);

    while (1) {
        printf("�����ڸ� �Է��ϼ��� (+, -, *, /) �Ǵ� q(����): ");
        scanf(" %c", &op); // ������ �����Ͽ� �Է� ����

        if (op == 'q' || op == 'Q') {
            printf("���α׷��� �����մϴ�.\n");
            break; // ����
        }
        else if (op == '+' || op == '-' || op == '*' || op == '/') {
            switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                }
                else {
                    printf("0���� ���� �� �����ϴ�.\n");
                    continue; // �ݺ��� ��� ����
                }
                break;
            }
            printf("���: %.2lf\n", result);
        }
        else {
            printf("�ٽ� �Է� �ϼ���\n");
        }
    }

    return 0;
}
