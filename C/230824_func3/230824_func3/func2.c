#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()

int main()
{
	// 5���� ��, ��, �� ������ �����ϰ� ����.(0~100)
	int score[5][3] = { 0 };
	srand(time(NULL));
	// �����ϰ� �߻��� ���ڸ� 5���� �л����� ����.
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101);
			printf("score[%d][%d]=%d \t", i, j, score[i][j]);
			sum = sum + score[i][j]; // sum += score[i][j];			
		}	// ���� ������ ��ġ
		avg = sum / 3;
		printf("���� : %d ��� : %d", sum, avg);
		sum = 0;
		if (avg >= 90 && avg <= 100) {
			printf(" A����");
		}
		else if (avg >= 80 && avg < 90) {
			printf(" B����");
		}
		else if (avg >= 70 && avg < 80) {
			printf(" C����");
		}
		else if (avg >= 60 && avg <70) {
			printf(" D����");
		}
		else {
			printf(" F����");
		}		
		printf("\n");		
	}
	}