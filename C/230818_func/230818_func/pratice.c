#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int i, int j);

int main()
{
	// 1. �������� ����ϴ� ���ڸ� main()���� �Է� ����.
	// 2. ��) 3�� �Է¹޾� �Ű������� �����ϸ� 3�� ���.
	// 3. �Է¹��� ���ڸ� �Ű������� �����Ͽ� ������ ���.
	int i = 0;
	int j = 0;
	printf("����Ϸ��� �������� �Է��Ͻÿ� : ");
	scanf("%d", &i);
	gugudan(i, j);

}

void gugudan(int i, int j)
{
	while (1) {
		if (i < 2) {
			printf("�ٽ� �Է��Ͻÿ�");
			scanf("%d", &i);
		}
		break;

	}
	if (i == 2) {
		for (j = 1; j <= 9; j++) {
			printf("2�� ��� :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 3) {
		for (j = 1; j <= 9; j++) {
			printf("3�� ��� :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 4) {
		for (j = 1; j <= 9; j++) {
			printf("4�� ��� :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 5) {
		for (j = 1; j <= 9; j++) {
			printf("5�� ��� :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 6) {
		for (j = 1; j <= 9; j++) {
			printf("6�� ��� :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 7) {
		for (j = 1; j <= 9; j++) {
			printf("7�� ��� :%dx%d=%d\n", i, j, i * j);
		}

	}
	if (i == 8) {
		for (j = 1; j <= 9; j++) {
			printf("8�� ��� :%dx%d=%d\n", i, j, i * j);
		}

	}
	if (i == 9) {
		for (j = 1; j <= 9; j++) {
			printf("9�� ��� :%dx%d=%d\n", i, j, i * j);
		}

	}
}