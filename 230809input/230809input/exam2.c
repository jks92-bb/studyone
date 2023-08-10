#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	//디버깅 - 1.오류를 해결. 2. 변수를 추적.
	//  동전 교환기 프로그램.
	//  조건1) 동전은 각각 500원, 100원 50원 10원이 사용됨.
	int coin500 = 0;	//500원
	int coin100 = 0;	//100원
	int coin50 = 0;		//50원
	int coin10 = 0;		//10원
	int sum = 0;
	//  조건2) 동전의 각각의 갯수를 저장할 변수들을 만들고 초기값 0으로 설정.

	//  조건3) 특정 금액의 지폐를 입력받으세요. (예: 1270)
	printf("금액 입력하세요\n");
	scanf("%d", &sum);
	//  조건4) 지폐를 500원 동전 갯수 구함.
	coin500 = sum / 500; // 500으로 나눈 몫.
	// 디버깅 작업 (coin500 변수에 들어있는 값을 확인)
	int nama = sum % 500;
	printf("500원 갯수 : %d\n", coin500);
	printf("500원 나머지 : %d\n", nama);

	//	조건5) 나머지 금액이 있으면 100원 동전 갯수 구함.
	coin100 = nama / 100; // 500나머지를 100으로 나눈 몫.
	int naman = nama % 100;
	printf("100원 갯수 : %d\n", coin100);
	printf("100원 나머지 : %d\n", naman);
	
	//	조건6) 나머지 금액이 있으면 50원 동전 갯수 구함.
	coin50 = naman / 50;
	int namann = nama % 50;
	printf("50원인 갯수 : %d\n", coin50);
	printf("50원 나머지 : %d\n", namann);

	coin10 = namann / 10;

	printf("10원 갯수 : %d\n", coin50);
	//	조건7) 나머지 금액이 있으면 10원 동전 갯수 구함.
	printf("10원 나머지 : %d\n", coin10);
	//	조건8) 반드시 아래와 같은 형태로 출력하기 바람.

	/*int nmg = sum % 500;
	coin100 = nmg / 100;
	nmg = nmg % 100;
	coin50 = nmg / 50;
	nmg = nmg % 50;
	coin10 = nmg / 10;
	nmg = nmg % 10;*/

	

}