#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int arr1[5] = { 1,2,3,4,5, };//4*5
	int arr2[] = { 1,2,3,4,5,6,7 }; // 4*7
	int arr3[5] = { 1,2 }; // 4*5
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); 
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	char str[] = "good morning!";
	printf("���ڿ� ��� : %s\n", str);

	char han[] = "ȫ�浿";
	printf("�ѱ� ��� :%s\n", han);
	printf("�迭 han�� ũ�� : %d\n", sizeof(han));


	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
	printf("�� ���� ������ ���: %c\n", str[13]);
	printf("�� ���� ������ ��� : %d\n", str[13]);

	str[12] = '?';
	printf("���ڿ� ��� : %s\n", str);





}