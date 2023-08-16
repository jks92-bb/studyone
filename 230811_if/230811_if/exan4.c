#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h> //system 함수 오류 뜨면 추가.


int main()
{
	// 1. 3개의 숫자를 입력받아서 홀수, 짝수 구분하기.
	// 조건) 반복문을 사용해서 입력

	printf("3개의 숫자를 입력하세요.\n");

	
	for (int i = 0; i < 3; i++) {
		printf("숫자 %d입력 :", i + 1);
		int n;
		scanf("%d", &n);
		if (n % 2 == 0) {
			printf("%d는 짝수\n", n);
		}
		else {
			printf("%d는 홀수\n", n);
		}
	}


	// 2. 1-100까지의 숫자중에서 5의 배수만 출력.
	// 조건) 반복문 for, while 사용하기.

	int q = 1;
	while (q <= 100) {
		if (q % 5 == 0) {
			printf("%d ", q);
		}
		q++;
	}

	printf("\n-------------------------------\n");

	for(int q= 1; q<=100; q++){
		if (q % 5 == 0) {
			printf("%d ", q);
		}
	
		
	}
	







	
}






	








