#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	struct student score[5] = { 0 }; // ����ü �迭 ���� ����
	srand(time(NULL));
			
	for (int i = 0; i < 5; i++) {
		score[i].kor = (rand() % 101); 
		score[i].eng = (rand() % 101);
		score[i].math = (rand() % 101);
		score[i].sum = score[i].kor + score[i].eng + score[i].math;
		score[i].avg = score[i].sum / 3;
		printf("�л�%d \n", i+1);
		printf("���� : %d\n", score[i].kor);
		printf("���� : %d\n", score[i].eng);
		printf("���� : %d\n", score[i].math);
		printf("�� : %d\n", score[i].sum);
		printf("��� : %d\n", score[i].avg);
		//printf("���� : %d\n", hak());
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