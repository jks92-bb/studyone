#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
void cal(int kor, int eng, int math);


int main()
{
	int kor = 0; int eng = 0; int math = 0;

	printf("국어 점수를 입력하시오.");
	scanf("%d", &kor);
	while (kor > 100 || kor < 0) {
		printf("다시 입력하시오.");
		scanf("%d", &kor);
	}

	printf("영어 점수를 입력하시오.");
	scanf("%d", &eng);
	while (eng > 100 || eng < 0) {
		printf("다시 입력하시오.");
		scanf("%d", &eng);
	}

	printf("수학 점수를 입력하시오.");
	scanf("%d", &math);
	while (math > 100 || math < 0) {
		printf("다시 입력하시오.");
		scanf("%d", &math);
	}

	cal( kor, eng, math);

}


void cal(int kor, int eng, int math)
{
	int sum = kor + eng + math;
	int avg = sum / 3;
	printf("국영수 총합 : %d , 국영수 평균 점수 : %d", sum, avg);
}