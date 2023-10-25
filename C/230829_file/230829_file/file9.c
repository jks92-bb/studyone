#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend; // ����ü ����

int main() {
	FILE* fp;
	Friend myfren1 = { 0 };
	Friend myfren2 = { 0 };

	/***file write***/
	fp = fopen("friend.bin", "wb");// ����ü�� ���� binary ���� ���
	printf("�̸�, ����, ���� �� �Է� :");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp); //(void*)��������.
	fclose(fp);

	/***file read****/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp); 
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return;
}