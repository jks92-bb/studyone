#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	char* name[] = { "ȫ�浿","��浿","�ڱ浿","�ֱ浿" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!	");
		return -1;
	}

	srand(time(NULL));

	
	fputs(name[rand() % 4] ,fp);
	fputc('A', fp);
	fputc('B', fp);
	fputs("my name is hong\n", fp);
	fputs("your name is yoon \n", fp);
	fclose(fp);


}