#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2, result = 0;
    char op;

    printf("계산할 두 숫자를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    do {
        printf("연산자를 입력하세요 (+, -, *, /): ");
        scanf(" %c", &op); // 공백을 포함하여 입력 받음

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
            if (num2 != 0) {
                result = num1 / num2;
                printf("결과: %lf\n", result);
            }
            else {
                printf("0으로 나눌 수 없습니다.\n");
            }
        }
        else if (op == 'q' || op == 'Q') { // 추가: 프로그램 종료
            break;
        }
        else {
            printf("다시 입력 하세요\n");
        }
    } while (1); // 항상 반복

    return 0;
}
