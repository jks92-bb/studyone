#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	FILE* fp = fopen("word.txt", "rt");
	int word;
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	while ((word = fgetc(fp)) != EOF) {
		printf("%c", word);
	}

	fclose(fp);
	return;





}