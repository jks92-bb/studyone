#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int b[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	int c[3][3] = { 0 };


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
		printf("\n");

		printf("a행렬 값 :\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

		printf("b행렬 값 :\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}

		printf("c행렬 값 :\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	
}
