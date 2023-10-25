#include <stdio.h>
int a = 0;
int b = 1;
void swap()
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	printf("a= %d, b= %d\n", a, b);
	swap();
	printf("a= %d, b= %d\n", a, b);
	return 0;
}