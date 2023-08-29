#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{


	/*printf("\n");
	for (int cur = 1; cur < 10; cur++) {

		for (int is = 2; is < 10; is++) {

			printf("%dx%d=%d\t", cur, is, cur * is);
		}
		printf("\n");
	}*/


	//printf("\n");
	//for (int cur = 1; cur < 10; cur++) {

	//	for (int is = 2; is < 10; is = is * 2) {

	//		printf("%dx%d=%d\t", cur, is, cur * is);
	//	}
	//	printf("\n");
	//}

	//// 디버깅: 오류 해결하는 과정
	//int j = 0;
	//do {
	//	printf("do-while 안녕\n");
	//	printf("j : %d\n", j); // 로그를 확인
	//	j++;
	//} while (j < 5);


	//int o = 0;
	//for (int o = 4; 3 < o && o < 10; o++) {
	//	printf("o는 %d\n", o);
	//}

	//int start, end;
	//printf("시작 숫자 입력 :");
	//scanf("%d", &start);
	//int backup = start;
	///*printf("마지막 숫자 입력 ;");
	//scanf("%d", &end);*/

	//do {
	//	printf("마지막 숫자 재입력:");
	//	scanf("%d", &end);
	//} while (start >= end);


	//int hap = 0;
	////for (; start <= end; start++) {
	//for (int i = start; i <= end; i++) {
	//	hap = hap + i;
	//}
	//printf("%d와 %d합 : %d", backup, end, hap);


	// 행과 열의 개념은 반드시 2중 반복문에서 적용 
	for (int i = 0; i < 3; i++) {
		printf("1행의 %d\t", i + 1);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) { // 행
		for (int j = 0; j < 2; j++) { //열
			printf("%d행 %d열\t", i + 1, j + 1);
		}
		printf("\n");
	}

	//구구단
	for (int i = 1; i < 10; i++) { //1~9
		for (int j = 2; j < 10; j++) { // 단
			printf("%dx%d=%d\t", j,i, i * j);
		}
		printf("\n");
	}



}
