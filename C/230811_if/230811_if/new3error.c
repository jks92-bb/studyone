#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2, result = 0;
    char op;

    printf("계산할 두 숫자를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    while (1) {
        printf("연산자를 입력하세요 (+, -, *, /) 또는 q(종료): ");
        scanf(" %c", &op); // 공백을 포함하여 입력 받음

        if (op == 'q' || op == 'Q') {
            printf("프로그램을 종료합니다.\n");
            break; // 종료
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
                    printf("0으로 나눌 수 없습니다.\n");
                    continue; // 반복문 계속 실행
                }
                break;
            }
            printf("결과: %.2lf\n", result);
        }
        else {
            printf("다시 입력 하세요\n");
        }
    }

    return 0;
}
