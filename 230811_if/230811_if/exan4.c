#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h> //system �Լ� ���� �߸� �߰�.


int main()
{
	// 1. 3���� ���ڸ� �Է¹޾Ƽ� Ȧ��, ¦�� �����ϱ�.
	// ����) �ݺ����� ����ؼ� �Է�

	printf("3���� ���ڸ� �Է��ϼ���.\n");

	
	for (int i = 0; i < 3; i++) {
		printf("���� %d�Է� :", i + 1);
		int n;
		scanf("%d", &n);
		if (n % 2 == 0) {
			printf("%d�� ¦��\n", n);
		}
		else {
			printf("%d�� Ȧ��\n", n);
		}
	}


	// 2. 1-100������ �����߿��� 5�� ����� ���.
	// ����) �ݺ��� for, while ����ϱ�.

	int q = 1;
	while (q <= 100) {
		if (q % 5 == 0) {
			printf("%d ", q);
		}
		q++;
	}

	printf("\n-------------------------------\n");

	for(int q= 1; q<=100; q++){
		if (q % 5 == 0) {
			printf("%d ", q);
		}
	
		
	}
	







	
}






	








