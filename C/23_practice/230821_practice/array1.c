#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	// 1���� �迭�� ���� �ɾ��� ����.
	// * B * B *
	// 1 1 2 1 1
	// * : ���ڰ� ���� �� B : ���ڰ� �ִ� ��.
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