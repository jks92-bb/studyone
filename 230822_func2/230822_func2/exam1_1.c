#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
void check_odd(int a[]);

int main()
{
	// 1.main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����.
	// 2. �����ϰ� 10���� ���ڸ� �迭�� ����.
	// 3. �迭�� �ּҰ��� �Ű������� �����ϰ� Ȧ,¦�� �����Ͽ� ��� �Լ�

	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	int random = 0;// ������ ������ ����
	int arr[10] = { 0 }; //10���� ���ڸ� �����ϴ� 1���� �迭

	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1;
		//printf("%d\n", random);
		arr[i] = random; //arr[0]~arr[9] �� ������ ����.
	}
	check_odd(arr);
}

void check_odd(int a[])
{

	for (int i = 0; i < 10; i++) {
		
		if (a[i] % 2 == 0)
		{
			printf("%d�� ¦�� �̴�.\n", a[i]);
		}

		else
		{
			printf("%d�� Ȧ�� �̴�.\n", a[i]);
		}
		
	}

}