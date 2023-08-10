#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int i=0;
	
	scanf("%d", &i);
	printf("%d단\t", i);

printf("\n");
for (int cur = 1; cur < 10; cur++) {

	for (int is = 2; is < 10; is++) {

		printf("%dx%d=%d\t", cur, is, cur * is);
	}
	printf("\n");
}
}
