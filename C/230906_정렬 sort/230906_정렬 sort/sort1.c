#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//선택 정렬

int main()
{
	int i;
	int j;
	int temp;
	int arr[5] = { 0 };

	printf("값 5개 입력해주십시오 : \n");
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
	printf("결과 : ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
}