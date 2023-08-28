#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	// 1. {{1,2}, {2,4,6}, {3,6}, {4,8,10,12}, {10}}
	// 2. 다음과 같이 출력하기. (간격은 \ t 사용, 0값은 출력 제외)
	// arr[0][0]=1 arr[0][1]=2
	// arr[1][0]=2 arr[1][1]=4 arr[1][2]=6
	// arr[2][0]=3 arr[2][1]=6
	// arr[3][0]=4 arr[3][1]=8 arr[3][2]=10 arr[3][3]=12
	// arr[4][0]=10 

	int arr[5][4] = {
		{1,2},
		{2, 4, 6},
		{3, 6},
		{4, 8, 10, 12},
		{10}
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] != 0) {
				printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
			}
		}
		printf("\n");
	}
}

