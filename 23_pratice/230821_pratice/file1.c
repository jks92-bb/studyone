#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	char* word[] = { "김장수", "하늘","여우","사자","김치" };
	FILE* fp = fopen("word.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!\n");
		return -1;
	}

	srand(time(NULL));

	fputs("your deserve it\n",fp);
	for (int i = 0; i < 5; i++) {
		fputs(word[i],fp);
		fputs("\n", fp);
	}
	fclose(fp);
}