#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char hak(int avg);

struct student // 1명의 정의
{
	int kor;
	int eng;
	int math;
	int sum;
	int avg;
	char hak;
};

int main()
{
	// 학생5명 국영수 점수 총점. 평균 학점 정의 구조체
	int s[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	struct student score[5] = { 0 }; // 구초체 배열 변수 선언
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		// 랜덤 점수 각각 할당.
		score[i].kor = s[rand() % 10];
		score[i].eng = s[rand() % 10];
		score[i].math = s[rand() % 10];
		score[i].sum = score[i].kor + score[i].eng + score[i].math; // 총점 계산.
		score[i].avg = score[i].sum / 3; // 평균계산
		
		printf("학생%d \n", i + 1);
		printf("국어 : %d\n", score[i].kor);
		printf("영어 : %d\n", score[i].eng);
		printf("수학 : %d\n", score[i].math);
		printf("합 : %d\n", score[i].sum);
		printf("평균 : %d\n", score[i].avg);
		score[i].hak = hak(score[i].avg); // 학점 계산 함수 이용하여 출력
		printf("----------------------\n");
	}
}

char hak(int avg)
{
	if (avg >= 90 && avg <=100) {
		printf("A학점이다.\n");
		return;
	}
	else if (avg >= 80 && avg <90) {
		printf("B학점이다.\n");
		return;
	}
	else if (avg >= 70 && avg<80) {
		printf("C학점이다.\n");
		return;
	}
	else if (avg >= 60 && avg <70) {
		printf("D학점이다.\n");
		return;
	}
	else if (avg >= 50) {
		printf("E학점이다.\n");
		return;
	}
	else if (avg <50) {
		printf("F학점이다.\n");
		return;
	}
}