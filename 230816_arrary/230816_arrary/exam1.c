#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1 차원 배열을 만들고 초기값을 20, 34, 22,11, 27
	// 배열 안에 들어있는 모든 값들의 합을 구하라.
	// 조건) 반복문 사용

	int str[5] = { 20, 34, 22, 11, 27 };
	int sum = 0, i = 0;
	/*for (i = 0; i < 5; i++) {
		sum += str[i];
	}*/
	while (i < 5) {
		sum += str[i];
		i++;
	}
	printf("합: %d\n", sum);

	// 1~ 100까지의 숫자를 1차원 배열에 저장.
	// 조건1) 3의 배수만 출력
	// 조건2) 배열의 위치가 90 번째 일 때 반복문 탈출.

	int t = 1;
	int arr[100] = { t };

	for (t = 1; t < 100; t++) {
		arr[t] = (t + 1);
		if (t % 3 == 0) {
			printf("%d ", t);
		}
		else if (t > 89) {
			break;
		}
	}

	int arr2[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr2[i] = i + 1;
		if (arr2[i] % 3 == 0) {
			printf("%d ", arr2[i]);
		}
		if (i == 89) break;
	}



	// 1. 1차원 배열에 2,4,6,8,10 을 저장
	// 2. 2의 배수이고 3의 배수인 값만 출력.
	// 3. 배열의 3번째 위치에서 탈출.

	int arr3[5] = { 0 };
	int o = 0;
	for (o = 0; o < 5; o++) {
		arr3[o] = (o + 1) * 2;
		if (arr3[o] % 2 == 0 && arr3[o] % 3 == 0) {
			printf("\n2의 배수이고 3의 배수인 값 : %d \n", arr3[o]);
		}
		if (o == 2) break;
	}

	// 1. 새로운 1차원 배열 a 생성
	// 2. arr4에 있는 값들을 a 배열에 50, 40, 30, 20, 10
	//  순서로 저장하여 출력하기.

	int arr4[] = { 10, 20, 30, 40, 50 };
	int a[5] = { 0 };
	int c = 0;
	for (int c = 0; c < 5; c++) {
		a[c] = arr4[4 - c];
	}
	printf("배열 A 값 : ");
	for (int c = 0; c < 5; c++) {
		printf("%d, ", a[c]);
	}
	printf("\n");
















}






