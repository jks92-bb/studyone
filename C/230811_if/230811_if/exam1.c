#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//관계 연산자, 논리연산자가 if문의 조건으로 많이 사용.
	//연습1.
	//1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램.
	//나머지 연산자 활용
	int num = 0;
	printf("짝수 일까 홀수 일까\n");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("짝수이다\n");
	}
	else {
		printf("홀수이다.\n");
	}


	//연습2
	//2개의 숫자를 입력받아서 크다, 작다, 같다를 체크하는 프로그램.

	int man1 = 0;
	int man2 = 0;
	printf("두개의 실수 입력 :");
	scanf("%d %d", &man1, &man2);

	if (man1 == man2) {
		printf("두 숫자는 같다\n");
	}
	else if (man1 > man2) {
		printf("%d가 %d보다 크다\n", man1, man2);
	}
	else {
		printf("%d가 %d보다 작다\n", man1, man2);
	}



	//연습3
	// 국어, 영어, 수학 점수를 입력받아서 총점, 평균 학점을 구하는 프로그램.
	// 학점 : 100~90:A학점, 89~80:B학점, ....59~0:F학점.
	// A, B, C, D, E, F 학점.
	
	int kor = 0, eng = 0, ma = 0;


	printf("국어 영어 수학 점수를 순서대로 넣으시오\n");
	
	scanf("%d", &kor);
	for (kor; kor > 100;)
	{
		printf("점수가 초과되었습니다. 다시 입력하시오\n");
		scanf("%d", &kor);
	}
	printf("국어 : %d점\n", kor);

	scanf("%d", &eng);
	for (eng; eng > 100;)
	{
		printf("점수가 초과되었습니다. 다시 입력하시오\n");
		scanf("%d", &eng);
	}
	printf("영어 : %d점\n", eng);

	scanf("%d", &ma);
	for (ma; ma > 100;)
	{
		printf("점수가 초과되었습니다. 다시 입력하시오\n");
		scanf("%d", &ma);
	}
	printf("수학 : %d점\n", ma);

	int sum = kor + eng + ma;	//	국영수 총점
	int avg = sum / 3;	//	국영수 평균

	printf("총점 : %d\t", sum);
	printf("평균 : %d\n", avg);

	if (avg >= 90 && avg <= 100) {
		printf("전체 A학점\n");
	}
	else if (avg >= 80 && avg < 90) {
		printf("전체 B학점\n");
	}
	else if (avg >= 70 && avg < 80) {
		printf("전체 C학점\n");
	}
	else if (avg >= 60 && avg < 70) {
		printf("전체 D학점\n");
	}
	else if (avg >= 50 && avg < 60) {
		printf("전체 E학점\n");
	}
	else {
		printf("전체 F학점\n");
	}

	





}