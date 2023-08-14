#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("-----------------\n");
    printf("음료 자판기 프로그램\n");
    printf("------------------\n");

    char ade;
    int money = 0;
    int result = 0;

    int a = 1500;
    int b = 1300;
    int c = 1500;
    int d = 1300;
    int e = 1400;

    printf("음료를 선택하세요 (A, B, C, D, E): ");
    scanf(" %c", &ade);

    switch (ade) {
    case 'a': case 'A':
        printf("파워에이드\n");
        break;
    case 'b': case 'B':
        printf("코카콜라\n");
        break;
    case 'c': case 'C':
        printf("펩시제로레몬\n");
        break;
    case 'd': case 'D':
        printf("펩시\n");
        break;
    case 'e': case 'E':
        printf("코카콜라제로\n");
        break;
    default:
        printf("잘못된 음료 선택입니다.\n");
        return 1; // 프로그램 종료
    }

    printf("가격을 입력하세요: ");
    scanf("%d", &money);

    switch (ade) {
    case 'a': case 'A':
        result = money - a;
        break;
    case 'b': case 'B':
        result = money - b;
        break;
    case 'c': case 'C':
        result = money - c;
        break;
    case 'd': case 'D':
        result = money - d;
        break;
    case 'e': case 'E':
        result = money - e;
        break;
    }

    if (result >= 0) {
        printf("거스름돈은 %d원입니다.\n", result);
    }
    else {
        printf("돈이 부족합니다.\n");
    }

    return 0;
}
