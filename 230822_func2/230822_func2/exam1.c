#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
void show_arr(int a[]);



int main()
{
	// 1.main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����.
	// 2. �����ϰ� 10���� ���ڸ� �迭�� ����.
	// 3. �迭�� �ּҰ��� �Ű������� �����ϰ� Ȧ,¦�� �����Ͽ� ��� �Լ�

	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	/*int random =  0 ;*/
	int a;
	int random[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		random[i] = (rand() % 45) + 1; // ������������ ���
	}
	show_arr(random);
}

void show_arr(int a[])
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