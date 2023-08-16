#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int arr[5] = { 1, 20, 30, 40,50 };// 1차원 배열 초기화, 규칙적이라서 이런 형식 가능
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; // 이 방식은 거의 안씀.

	for (i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10; // 규칙적이라서 이런 형식 가능.
		printf("arr[%d]:%d\n", i, arr[i]);
		sum += arr[i];
		}
	printf("배열요소에 저장된 값의 합 : %d\n", sum);
}
