#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	// 1차원 배열에 지뢰 심어져 있음.
	// * B * B *
	// 1 1 2 1 1
	// * : 지뢰가 없는 땅 B : 지뢰가 있는 땅.
	char land[] = { '*' , 'B', '*','B','*' };
	int arr[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		if (land[i] == 'B') {
			arr[i]++;
			if (i > 0) {
				arr[i - 1]++;
			}
			if (i < 4) {
				arr[i + 1]++;
			}

		}

	}

	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}




}