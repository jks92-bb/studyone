#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int check_odd(int a[], int t, int num);

int main()
{
	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	int random = 0;// ������ ������ ����
	int arr[6] = { 0 }; //6���� ���ڸ� �����ϴ� 1���� �迭

	for (int i = 0; i < 6; i++) {
		int random;
		do {
			random = (rand() % 45) + 1;
		} while (check_odd(arr, i, random));

		arr[i] = random; //arr[0]~arr[5] �� ������ ����.
		printf("%d ", random);
	}
	printf("\n");
}

int check_odd(int a[], int t, int num)
{
	for (int i = 0; i < t; i++) {

		if (a[i] == num)
		{
			return 1; // �ߺ� ���� 1��ȯ.
		}
		return 0; // �ߺ����� ���� ���� 0��ȯ.
	}
}