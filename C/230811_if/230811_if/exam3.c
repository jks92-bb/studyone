#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h> //system 함수 오류 뜨면 추가.


int main()
{ //식당 메뉴 자동주문 프로그램.

	//while (1) {
	//	system("cls");	//	cls: 화면을 청소하는 명령어
	//	printf("-----------------\n");
	//	printf("식당 메뉴 자동 주문 프로그램\n");
	//	printf("------------------\n");
	//	printf("a.김치찌개 : 5000원\n");
	//	printf("b.칼국수 : 4000원\n");
	//	printf("c.된장찌개 : 3000원\n");
	//	printf("d.부대찌개 : 5500원\n");
	//	printf("e.참치찌개 : 5000원\n");
	//	printf("x.프로그램 종료\n");
	//	printf("-----------------\n");

	//	char me = 0;
	//	scanf(" %c", &me);

	//	if (me == 'x') {
	//		printf("프로그램 종료\n");
	//		break;
	//	}
	//	switch (me) {
	//	case 'a': case 'A':
	//		printf("김치찌개\n");
	//		break;
	//	case 'b': case 'B':
	//		printf("칼국수\n");
	//		break;
	//	case 'c': case 'C':
	//		printf("된장찌개\n");
	//		break;
	//	case 'D': case 'd':
	//		printf("부대찌개\n");
	//		break;
	//	case 'E': case 'e':
	//		printf("참치찌개\n");
	//		break;
	//	//case'x':
	//	//	printf("앱을 종료합니다.\n");
	//	//	exit(0); // 강제로 앱을 종료 exit 함수. 강제 프로그램 종료 함수.
	//	}
	//	system("pause"); // 동작 일시정지. 외부프로그램을 c언어 내에서 동작시키는 함수. system함수.
	//}



	printf("-----------------\n");
	printf("음료 자판기 프로그램\n");
	printf("------------------\n");
	printf("a.파워에이드\n");
	printf("b.코카콜라\n");
	printf("c.펩시제로레몬\n");
	printf("d.펩시\n");
	printf("e.코카콜라제로\n");

	char ade = 0;


	printf("에이드 선택\n");
	scanf("%c", &ade);
	switch (ade) {
	case 'a': case 'A':
		printf("파워에이드\n");
		break;
	case 'b': case 'B':
		printf("코카콜라\n");
		break;
	case 'c': case 'C':
		printf("펩시제로레몬\n");
		break;
	case 'D': case 'd':
		printf("펩시\n");
		break;
	case 'E': case 'e':
		printf("코카콜라제로\n");
		break;
	default:
		printf("잘못된 메뉴 선택!\n");
	}

	printf("---------------\n");

	//int result = 0;
	int money = 0;
	/*int a = 1500;
	int b = 1300;
	int c = 1500;
	int d = 1300;
	int e = 1500;

	result = money - a;
	result = money - b;
	result = money - c;
	result = money - d;
	result = money - e;*/


	printf("금액을 입금하세요 :");
	scanf("%d", &money);
	switch (ade) {

	case 'a': case 'A':
		// 값을 소스코드에 직접 표기하는 방식 - 하드 코딩(hard coding) 
		// 하드 코딩 방식은 비효율적 --> 변수 이용이 효율적.
		printf("파워에이드 구매하셨습니다.\n");
		printf("거스름돈 %d를 받으세요\n", money - 1500);
		break;
	case 'b': case 'B':
		printf("코카콜라 구매하셨습니다.\n");
		printf("거스름돈 %d를 받으세요\n", money - 1300);
		break;
	case 'c': case 'C':
		printf("펩시제로레몬 구매하셨습니다.\n");
		printf("거스름돈 %d를 받으세요\n", money - 1500);
		break;
	case 'D': case 'd':
		printf("펩시 구매하셨습니다.\n");
		printf("거스름돈 %d를 받으세요\n", money - 1300);
		break;
	case 'E': case 'e':
		printf("코카콜라제로 구매하셨습니다.\n");
		printf("거스름돈 %d를 받으세요\n", money - 1500);
		break;
	}

	// 변수 : 정보를 저장하는 공간.
	// 정보 : 숫자(정수, 실수), 문자(문자, 문자열)
	// 정수 : int(%d), 실수: float(%f) double(%lf) , 문자 : char(%c)
	// 연산자 : %(나머지), 비교(관계)연산자, 논리연산자
	// 출력 : printf 함수, 입력 : scanf 함수
	// 반복문 : for, while, do-while
	// 제어문 : if, switch








}