#include <stdio.h>

int main()
{

	//������� :const�� ���� �տ� ����.(���� �Ұ�)
	int result;
	int num1, num2, num3;// �Ϲݺ��� : ���� ����



	printf("���� ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d +%d =%d \n", num1, num2, num3, result);

	//printf("���� ���� �Է� : ");
	//sizeof(num1) : num1 ������ ũ��.

	/*scanf_s("%d %d %d", &num1, &num2, &num3,
		sizeof(num1), sizeof(num2), sizeof(num3));
	result = num1 + num2 + num3;
	printf("%d + %d +%d =%d \n", num1, num2, num3, result);*/

	//
	
	printf("1���� ���� �Է� :");
	scanf_s("%d", &num1);
	printf("2��° ���� �Է� :");
	scanf_s("%d", &num2);
	printf("3��° ���� �Է� :");
	scanf_s("%d", &num3);
	int re;
	re = num1 + num2 + num3;

	printf("%d+%d+%d =%d\n", num1, num2, num3, re);

	//�������
	const int n = 100;
	int n2 = 200;
	n2 = 300; // �Ϲݺ����� ���� ���� ����.
	//n = 500; // ��������� �� ����Ұ�.


	return 0;

}