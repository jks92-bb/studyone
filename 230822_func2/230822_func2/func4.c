#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_arr_comm(int a[2][3]);

int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	// arr1 �迭 ���
	show_arr_comm(arr1);

	int arr2[2][3] = {
		{10},
		{20, 30}
	};
	// arr2 �迭 ���
	show_arr_comm(arr2);

	int arr3[2][3] = { 100, 200, 300, 400 };
	show_arr_comm(arr3);

}
// ���� arr1, arr2, arr3�迭�� ����ϴ� �Լ� 3���ۼ�

void show_arr_comm(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
