#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu, i, j;

	// ������ �����ο� �Է�
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	// ������ ���� �α��� ��� �� ���
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		for (j = 0; j < 2; j++)
		{
			popu += villa[i][j];
		}
		printf("%d�� �α���: %d\n", i + 1, popu);
	}

	return 0;
}
