#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void show_2d_array(int rows, int cols, int a[][4]);

int main()
{
   
    int arr1[2][4] = {
        {1, 2, 3, 30},
        {4, 5, 6, 60}
    };

    int arr2[3][4] = {
        {10},
        {20, 30},
        {40, 50, 60}
    };

    int arr3[2][4] = { {100, 200}, {300, 400} };

    show_2d_array(2, 4, arr1);
    show_2d_array(3, 4, arr2);
    show_2d_array(2, 4, arr3);

    
}

void show_2d_array(int rows, int cols, int a[][4])
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
