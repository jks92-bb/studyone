#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	
	//  윈도우 관리자권한 정책 때문에 c:/ 바로 밑에는 생성불가.
	// c:/test 는 가능함.
	// 1. 파일 오픈( wt: write, text 쓰기 텍스트모드)
	// W: 기존의 내용을 무시하고 덮어씀.
	// a: 기존 내용에 붙여짐.
	FILE* fp = fopen("data.txt", "at");
	if (fp == NULL) {
		puts("파일오픈 실패!\n");
		return -1; //exit(0)써도 됌. 의미상.
	}
	fputc('K', fp);
	fputc('L', fp);
	fputc('M', fp);
	fclose(fp);
	return 0;

}