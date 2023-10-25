#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char sel = 0;
	int mum = 0;
	printf(" M 오전, A 오후, E 저녁\n ");
	
	scanf("%c", &sel);
	
		switch (sel)
		{
		case 'M': case 'm':
			printf("morning \n");
			break;
		case 'A': case 'a':
			printf("afternoon \n");
			break;
		case 'e': case 'E':
			printf("evening \n");
			break;
		default:
			printf("i don't know!\n");
			
		}
	
	
	

	return 0;
}
