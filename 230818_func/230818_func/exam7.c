#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void cal(int kor, int eng, int math)

int main()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &kor);
	while (kor > 100 || kor < 0) {
		printf("�ٽ� �Է��Ͻÿ�.");
		exit(0); // ���α׷� ���� ���� �Ǵ� return 0;

	}
	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &eng);
	while (eng > 100 || eng < 0) {
		printf("�ٽ� �Է��Ͻÿ�.");
		exit(0);
	}
	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &math);

	while (math > 100 || math < 0) {
		printf("�ٽ� �Է��Ͻÿ�.");
		exit(0);
	}
	cal(kor, eng, math);
}

void cal(int kor, int eng, int math)
{
	printf("���� ���� ���� : %d, %d, %d", kor, eng, math);
	int sum = kor + eng + math;
	int avg = sum / 3;
	printf("���� : %d, ��� : %d", sum, avg);
}