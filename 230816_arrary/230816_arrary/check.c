#include <stdio.h>

int main() {
    // 2차원 정수형 배열 선언과 초기화
    int matrix[3][4] = { { 0, 1 },
    { 1, 3 } };

    // 2차원 배열의 요소 출력
    printf("2차원 배열의 요소:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
