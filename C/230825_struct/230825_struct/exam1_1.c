#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char hak(int avg);

struct student // 1���� ����
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
	// �л�5�� ������ ���� ����. ��� ���� ���� ����ü
	int s[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	struct student score[5] = { 0 }; // ����ü �迭 ���� ����
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		// ���� ���� ���� �Ҵ�.
		score[i].kor = s[rand() % 10];
		score[i].eng = s[rand() % 10];
		score[i].math = s[rand() % 10];
		score[i].sum = score[i].kor + score[i].eng + score[i].math; // ���� ���.
		score[i].avg = score[i].sum / 3; // ��հ��
		
		printf("�л�%d \n", i + 1);
		printf("���� : %d\n", score[i].kor);
		printf("���� : %d\n", score[i].eng);
		printf("���� : %d\n", score[i].math);
		printf("�� : %d\n", score[i].sum);
		printf("��� : %d\n", score[i].avg);
		score[i].hak = hak(score[i].avg); // ���� ��� �Լ� �̿��Ͽ� ���
		printf("----------------------\n");
	}
}

char hak(int avg)
{
	if (avg >= 90 && avg <=100) {
		printf("A�����̴�.\n");
		return;
	}
	else if (avg >= 80 && avg <90) {
		printf("B�����̴�.\n");
		return;
	}
	else if (avg >= 70 && avg<80) {
		printf("C�����̴�.\n");
		return;
	}
	else if (avg >= 60 && avg <70) {
		printf("D�����̴�.\n");
		return;
	}
	else if (avg >= 50) {
		printf("E�����̴�.\n");
		return;
	}
	else if (avg <50) {
		printf("F�����̴�.\n");
		return;
	}
}