#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu, i, j;

	// 가구별 거주인원 입력
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	// 빌라의 층별 인구수 계산 및 출력
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		for (j = 0; j < 2; j++)
		{
			popu += villa[i][j];
		}
		printf("%d층 인구수: %d\n", i + 1, popu);
	}

	return 0;
}
