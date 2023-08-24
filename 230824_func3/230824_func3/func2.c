#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()

int main()
{
	// 5명의 국, 영, 수 점수를 랜덤하게 생성.(0~100)
	int score[5][3] = { 0 };
	srand(time(NULL));
	// 랜덤하게 발생한 숫자를 5명의 학생에게 저장.
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101);
			printf("score[%d][%d]=%d \t", i, j, score[i][j]);
			sum = sum + score[i][j]; // sum += score[i][j];			
		}	// 열이 끝나는 위치
		avg = sum / 3;
		printf("총점 : %d 평균 : %d", sum, avg);
		sum = 0;
		if (avg >= 90 && avg <= 100) {
			printf(" A학점");
		}
		else if (avg >= 80 && avg < 90) {
			printf(" B학점");
		}
		else if (avg >= 70 && avg < 80) {
			printf(" C학점");
		}
		else if (avg >= 60 && avg <70) {
			printf(" D학점");
		}
		else {
			printf(" F학점");
		}		
		printf("\n");		
	}
	}