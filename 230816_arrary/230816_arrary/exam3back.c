#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int b[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int c[3][3] = { 0 };

    // 두 행렬의 합 계산
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // 결과 출력
    printf("행렬 A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("행렬 B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("두 행렬의 합:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
