#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	printf("%d %d", a, b);
	int temp = a;
	a = b;
	b = temp;
	return 0;
}