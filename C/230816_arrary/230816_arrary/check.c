#include <stdio.h>

int main() {
    // 2���� ������ �迭 ����� �ʱ�ȭ
    int matrix[3][4] = { { 0, 1 },
    { 1, 3 } };

    // 2���� �迭�� ��� ���
    printf("2���� �迭�� ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
