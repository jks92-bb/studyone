#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_arr_comm(int arr[][3], int row, int col);

int main()
{
	int arr1[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	int arr2[3][3] = {
		{10},
		{20, 30},
		{40, 50, 60}
	};

	int arr3[2][3] = { 100, 200, 300, 400 };

	show_arr_comm(arr1,2,3);
	show_arr_comm(arr2,3,3);
	show_arr_comm(arr3,2,3);
}

void show_arr_comm(int arr[][3],int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
}


