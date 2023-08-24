#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()
char hak_func(int avg);
int AVG_func(int sum);

int main()
{
	// 구조체(클래스와 비슷)를 사용하여 처리하는 것이 더 좋음
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

		avg = AVG_func(sum);
		printf("총점 : %d 평균 : %d  ", sum, avg);
		printf("%c학점", hak_func(avg));
		sum = 0;
		printf("\n");
	}
}

char hak_func(int avg)
{
	char hak = 0;
	if (avg >= 90 && avg <= 100) {
		hak = 'A';
	}
	else if (avg >= 80 && avg < 90) {
		hak = 'B';
	}
	else if (avg >= 70 && avg < 80) {
		hak = 'C';
	}
	else if (avg >= 60 && avg < 70) {
		hak = 'D';
	}
	else {
		hak = 'F';
	}
	return hak;
}

int AVG_func(int sum)
{
	return sum / 3;
	}

