#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> // time()
#define DEBUG 1 // �ּ����� ���������� ������ڵ尡 ���� ����.

int main()
{
	int lotto[6] = { 0 }; // �ζ� ��ȣ�� ������ �迭
	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;

#ifdef DEBUG // #define DEBUG �� ���ǵǾ������� ������.
		printf("%d\t", lotto[i]); // �����
#endif
		for (int j = 0; j < i; j++) {
			// �迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}