#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���� ������, �������ڰ� if���� �������� ���� ���.
	//����1.
	//1���� ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷�.
	//������ ������ Ȱ��
	int num = 0;
	printf("¦�� �ϱ� Ȧ�� �ϱ�\n");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("¦���̴�\n");
	}
	else {
		printf("Ȧ���̴�.\n");
	}


	//����2
	//2���� ���ڸ� �Է¹޾Ƽ� ũ��, �۴�, ���ٸ� üũ�ϴ� ���α׷�.

	int man1 = 0;
	int man2 = 0;
	printf("�ΰ��� �Ǽ� �Է� :");
	scanf("%d %d", &man1, &man2);

	if (man1 == man2) {
		printf("�� ���ڴ� ����\n");
	}
	else if (man1 > man2) {
		printf("%d�� %d���� ũ��\n", man1, man2);
	}
	else {
		printf("%d�� %d���� �۴�\n", man1, man2);
	}



	//����3
	// ����, ����, ���� ������ �Է¹޾Ƽ� ����, ��� ������ ���ϴ� ���α׷�.
	// ���� : 100~90:A����, 89~80:B����, ....59~0:F����.
	// A, B, C, D, E, F ����.
	
	int kor = 0, eng = 0, ma = 0;


	printf("���� ���� ���� ������ ������� �����ÿ�\n");
	
	scanf("%d", &kor);
	for (kor; kor > 100;)
	{
		printf("������ �ʰ��Ǿ����ϴ�. �ٽ� �Է��Ͻÿ�\n");
		scanf("%d", &kor);
	}
	printf("���� : %d��\n", kor);

	scanf("%d", &eng);
	for (eng; eng > 100;)
	{
		printf("������ �ʰ��Ǿ����ϴ�. �ٽ� �Է��Ͻÿ�\n");
		scanf("%d", &eng);
	}
	printf("���� : %d��\n", eng);

	scanf("%d", &ma);
	for (ma; ma > 100;)
	{
		printf("������ �ʰ��Ǿ����ϴ�. �ٽ� �Է��Ͻÿ�\n");
		scanf("%d", &ma);
	}
	printf("���� : %d��\n", ma);

	int sum = kor + eng + ma;	//	������ ����
	int avg = sum / 3;	//	������ ���

	printf("���� : %d\t", sum);
	printf("��� : %d\n", avg);

	if (avg >= 90 && avg <= 100) {
		printf("��ü A����\n");
	}
	else if (avg >= 80 && avg < 90) {
		printf("��ü B����\n");
	}
	else if (avg >= 70 && avg < 80) {
		printf("��ü C����\n");
	}
	else if (avg >= 60 && avg < 70) {
		printf("��ü D����\n");
	}
	else if (avg >= 50 && avg < 60) {
		printf("��ü E����\n");
	}
	else {
		printf("��ü F����\n");
	}

	





}