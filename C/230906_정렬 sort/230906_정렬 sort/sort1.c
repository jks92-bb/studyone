#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� ����

int main()
{
	int i;
	int j;
	int temp;
	int arr[5] = { 0 };

	printf("�� 5�� �Է����ֽʽÿ� : \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("��� : ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
}