#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()
char hak_func(int avg);
int AVG_func(int sum);

int main()
{
	// ����ü(Ŭ������ ���)�� ����Ͽ� ó���ϴ� ���� �� ����
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

		avg = AVG_func(sum);
		printf("���� : %d ��� : %d  ", sum, avg);
		printf("%c����", hak_func(avg));
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

