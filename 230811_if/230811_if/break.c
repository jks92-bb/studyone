#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;

	while (1)	//	���ѷ���
	{
		sum += num;
		if (sum > 5000) {
			break;
		}// break�� ����. �ڽ��� ���� �ݺ����� Ż��.
		num++;
	}

	printf("sum : %d\n", sum); // dead code
	printf("num : %d\n", num); // dead code

	return 0;
	}
