#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 랜덤한 휴대폰 번호 생성 함수
void phone(char number[]);

int main() {
    srand(time(NULL)); // 시드 설정

    char number[12]; // 11자리의 휴대폰 번호와 문자열 끝을 위한 공간

   phone(number);

    printf("랜덤한 휴대폰 번호: %s\n", number);

    return 0;
}

void phone(char number[]) {
    // 휴대폰 번호의 첫 번째 숫자는 항상 0
    number[0] = '0';

    // 2~3번째 숫자는 랜덤하게 1~4 사이의 수
    number[1] = '1';
    number[2] = '0';

    // 나머지 8자리는 랜덤한 숫자 생성
    for (int i = 3; i < 11; i++) {
        number[i] = '0' + rand() % 10;
    }

    // 문자열 끝을 나타내는 널 문자 추가
   number[11] = '\0';
}
