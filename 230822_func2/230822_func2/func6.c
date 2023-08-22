#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_arr_comm(int a[2][4], int b[3][3], int c[2][2]);

int main()
{
	int arr1[2][4] = {
		{1, 2, 3, 30},
		{4, 5, 6, 60}
	};
		
	int arr2[3][3] = {
		{10},
		{20, 30},
		{40, 50, 60}
	};
		
	int arr3[2][2] = { 100, 200, 300, 400 };

	show_arr_comm(arr1, arr2,arr3);
	}

void show_arr_comm(int a[2][4], int b[3][3], int c[2][2])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}


