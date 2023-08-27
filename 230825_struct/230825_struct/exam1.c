#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	struct student score[5] = { 0 }; // 구초체 배열 변수 선언
	srand(time(NULL));
			
	for (int i = 0; i < 5; i++) {
		score[i].kor = (rand() % 101); 
		score[i].eng = (rand() % 101);
		score[i].math = (rand() % 101);
		score[i].sum = score[i].kor + score[i].eng + score[i].math;
		score[i].avg = score[i].sum / 3;
		printf("학생%d \n", i+1);
		printf("국어 : %d\n", score[i].kor);
		printf("영어 : %d\n", score[i].eng);
		printf("수학 : %d\n", score[i].math);
		printf("합 : %d\n", score[i].sum);
		printf("평균 : %d\n", score[i].avg);
		//printf("학점 : %d\n", hak());
		printf("----------------------\n");
	}	
}



//int hak(int[])
//{
//	struct student score[5] = { 0 };
//	for (int i = 0; i < 5; i++) {
//		score[i].avg
//	}
//
//		
//}