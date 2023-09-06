#include <stdio.h>
#include <time.h>
#define LEN 5
void insert_sort(int* arr);

// 삽입정렬
int main()
{
	int arr[LEN] = { 2,4,8,1,3 };
	int i = 0;
	printf("정렬 전 : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	insert_sort(arr);
	printf("정렬 완료 : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insert_sort(int* arr) {

	int i = 0, key = 0, j = 0;

	for (i = 1; i < LEN; i++) {
		key = arr[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

		for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key가 더 큰 값일 때까지 
			arr[j + 1] = arr[j]; // 한 칸 뒤로 이동 
		}
		arr[j + 1] = key;
	}
}

