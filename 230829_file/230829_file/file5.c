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
		puts("���Ͽ��½���!");
		return -1;
	}

	//���� ������ ���� 1���� ����.
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	//������ ���� �����ߴٸ�
	if (feof(src) != 0) {
		puts("���Ϻ��� �Ϸ�!");
	}
	else {
		puts("���Ϻ��� ����!");
	}
	fclose(src);
	fclose(des);
	return 0;
}