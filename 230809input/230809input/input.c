#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;
	double num3, num4;
	// double���� lf�� ����.

	//_CRT_SECURE_NO_WARNINGS -> scanf ������¿��� �����ؼ� ���ΰ͵���.

	printf("����on:");
	// �ֽ� visual studio������ scanf�� ���Ұ�.
	// scanf_s ��� �Լ��� ��ü�Ǿ���.
	// ������ C��� ǥ���Լ��� scanf�� ����.

	scanf("%d", &num1);  //  ù���� ���� �Է�
	printf("����two:");
	scanf("%d", &num2); // �ι�° ���� �Է�

	result = num1 + num2;
	printf("%d+ %d = %d \n", num1, num2, result);

	printf("���on:");
	scanf("%lf", &num3);
	printf("���two :");
	scanf("%lf", &num4);

	double resulte = num3 + num4;
	printf("%lf+%lf = %lf\n", num3, num4, resulte);
	}