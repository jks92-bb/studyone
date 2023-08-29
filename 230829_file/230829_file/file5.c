#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;
	if (src == NULL || des == NULL) {
		puts("파일오픈실패!");
		return -1;
	}

	//파일 끝까지 문자 1개씩 읽음.
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	//파일의 끝에 도달했다면
	if (feof(src) != 0) {
		puts("파일복사 완료!");
	}
	else {
		puts("파일복사 실패!");
	}
	fclose(src);
	fclose(des);
	return 0;
}