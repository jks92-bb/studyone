#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int check_odd(int a[], int t, int num);

int main()
{
	srand(time(NULL)); // 매번 다른 시드값 생성

	int random = 0;// 난수를 저장할 변수
	int arr[6] = { 0 }; //6개의 숫자를 저장하는 1차원 배열

	for (int i = 0; i < 6; i++) {
		int random;
		do {
			random = (rand() % 45) + 1;
		} while (check_odd(arr, i, random));

		arr[i] = random; //arr[0]~arr[5] 에 난수를 저장.
		printf("%d ", random);
	}
	printf("\n");
}

int check_odd(int a[], int t, int num)
{
	for (int i = 0; i < t; i++) {

		if (a[i] == num)
		{
			return 1; // 중복 숫자 1반환.
		}
		return 0; // 중복되지 않은 숫자 0반환.
	}
}