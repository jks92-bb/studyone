#include <stdio.h>
void swap(int* a, int* b);

int main()
{
	int a = 3; 
	int b = 6;
	printf("a= %d, b= %d\n", a, b);
	swap(&a, &b);
	printf("a= %d, b= %d\n", a, b);	
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}