#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int add(int num1, int num2);


void main()
{
	int result;
	result = add(3, 4);
	printf("µ¡¼À°á°ú1: %d\n", result);
	result = add(5, 8);
	printf("µ¡¼À°á°ú2: %d\n", result);
	return;

}


int add(int num1, int num2)
{
	return num1 + num2;
}