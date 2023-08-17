#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    // 1차원 배열 dmz에 지뢰가 아래처럼 매설되었음.
    // * B * B * 
    // 1 1 2 1 1
    // * : 지뢰가 없는 땅, B: 지뢰.
    char dmz[] = { '*', 'B', '*', 'B', '*' };
    int arr[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        if (dmz[i] == '*') {
            printf("* ");
        }
        else if (dmz[i] == 'B') {
            printf("B ");
        }
        else {
            int count = 0;
            if (i > 0 && dmz[i - 1] == 'B') {
                count++;
            }
            if (i < 4 && dmz[i + 1] == 'B') {
                count++;
            }
            printf("%d ", count);
        }
    }

    return 0;
}
