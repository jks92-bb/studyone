#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()
//#define DEBUG 1	// 주석으로 막혀있으면 디버깅코드가 동작 안함.
void show_lotto(int lotto[]);

int main()
{
	int lotto[6] = { 0 }; // 로또 번호를 저장할 배열
	srand(time(NULL)); // 매번 다른 시드값 생성
	show_lotto(lotto); // 함수 호출
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}

void show_lotto(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;

#ifdef DEBUG // #define DEBUG 가 정의되어있으면 동작함.
		printf("%d\t", lotto[i]); // 디버깅
#endif
		for (int j = 0; j < i; j++) {
			// 배열에 있는 숫자와 새로 획득한 숫자 비교
			if (lotto[i] == lotto[j]) {
				i--;
				break;
		}
	}
}
}