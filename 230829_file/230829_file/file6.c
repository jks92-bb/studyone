#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);		
	}
	/*while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break;
		printf("%c", ch);
	}*/			

	fclose(fp);
	return 0;
}