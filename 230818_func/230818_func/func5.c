#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int add(int num1, int num2);


void main()
{
	int result;
	result = add(3, 4);
	printf("�������1: %d\n", result);
	result = add(5, 8);
	printf("�������2: %d\n", result);
	return;

}


int add(int num1, int num2)
{
	return num1 + num2;
}