#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	ch = fgetc(fp); //아스키코드라고 생각하면 됌 여기서 ch는. 
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);
	// \n을 만날때까지 read.	
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);	
	printf("%s", str);

	for (int i = 0; i < 4; i++) {
		fgets(str, sizeof(str), fp);
		printf("%s", str);
	}

	fclose(fp);
	return 0;
}
