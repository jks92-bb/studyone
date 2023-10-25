#include <stdio.h>
#include <time.h>
#define LEN 5
void insert_sort(int* arr);

// ��������
int main()
{
	int arr[LEN] = { 2,4,8,1,3 };
	int i = 0;
	printf("���� �� : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	insert_sort(arr);
	printf("���� �Ϸ� : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insert_sort(int* arr) {

	int i = 0, key = 0, j = 0;

	for (i = 1; i < LEN; i++) {
		key = arr[i]; // ���� ���Ե� ������ i��° ������ key ������ ����

		for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key�� �� ū ���� ������ 
			arr[j + 1] = arr[j]; // �� ĭ �ڷ� �̵� 
		}
		arr[j + 1] = key;
	}
}

