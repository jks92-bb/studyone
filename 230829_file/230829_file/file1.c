#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	
	//  ������ �����ڱ��� ��å ������ c:/ �ٷ� �ؿ��� �����Ұ�.
	// c:/test �� ������.
	// 1. ���� ����( wt: write, text ���� �ؽ�Ʈ���)
	// W: ������ ������ �����ϰ� ���.
	// a: ���� ���뿡 �ٿ���.
	FILE* fp = fopen("data.txt", "at");
	if (fp == NULL) {
		puts("���Ͽ��� ����!\n");
		return -1; //exit(0)�ᵵ ��. �ǹ̻�.
	}
	fputc('K', fp);
	fputc('L', fp);
	fputc('M', fp);
	fclose(fp);
	return 0;

}