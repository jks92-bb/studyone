#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;

	while (1)	//	무한루프
	{
		sum += num;
		if (sum > 5000) {
			break;
		}// break문 실행. 자신이 속한 반복문만 탈출.
		num++;
	}

	printf("sum : %d\n", sum); // dead code
	printf("num : %d\n", num); // dead code

	return 0;
	}
