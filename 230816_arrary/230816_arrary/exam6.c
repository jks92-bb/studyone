#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    // 1차원 배열 dmz에 지뢰가 아래처럼 매설되었음.
    // * B * B * 
    // 1 1 2 1 1
    // * : 지뢰가 없는 땅, B: 지뢰.
    char dmz[] = { 'B', 'B', '*', '*', '*' };
    int arr[5] = { 0 };

    if (dmz[0] == '*') {
        printf("안전지대\n");
    }

    for (int i = 0; i < 5; i++) {
        if (dmz[i] == 'B') {
            arr[i]++; // 현재 위치가 지뢰인 경우
            if (i > 0) {
                arr[i - 1]++; // 좌측에 지뢰가 있는 경우
            }
            if (i < 4) {
                arr[i + 1]++; // 우측에 지뢰가 있는 경우
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
