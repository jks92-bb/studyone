#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	// �������� ������� ������ 2���� �迭 ����
	// 2x1=2 3x1=3 4x1=4... 9x1=9
	// ...
	// 2x9=18 .............9x9=81 
	// ��� ���´� ���� ���� �ϰ� ������� �迭���� �о�ͼ� ���.


	int gu[9][8];


	/*for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			gu[i][j] = (i * j);
		}
		printf("\n");
	}*/

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			gu[i-1][j-2] = (i * j);
			printf("%dx%d=%d\t", j, i, gu[i-1][j-2]);
		}
		printf("\n");
	}





}
