#include <stdio.h>

// 선택 정렬
int main() {

	int i = 0;
	int arr[] = { 8,3, 1,4 };

	int temp;
	for (i = 0; i < 5; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}

}