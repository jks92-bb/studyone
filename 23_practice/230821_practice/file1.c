#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	char* word[] = { "�����", "�ϴ�","����","����","��ġ" };
	FILE* fp = fopen("word.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!\n");
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