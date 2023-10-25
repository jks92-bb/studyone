#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void friend_write();
void friend_read();

typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend; // ����ü ����


int main() {

	while (1) {
		switch (main_menu()) {
		case 1:
			friend_write();
			break;
		case 2:
			friend_read();
			break;
		case 3:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("���� �߸��Ǿ����ϴ�. \n");
		}
	}
}

int main_menu()
{
	printf("---------------\n");
	printf("���� ���� ���α׷� v1.0\n");
	printf("---------------\n");
	printf("1. ģ�� ���� ����\n");
	printf("2. ģ�� ���� �б�\n");
	printf("3. ����\n");
	printf("---------------\n");
	printf("�޴����� : ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void friend_write() {
	FILE* fp;
	Friend myfren1 = { 0 };
	/***file write***/
	fp = fopen("friend.bin", "wb");// ����ü�� ���� binary ���� ���
	printf("�̸� :");
	scanf("%s", myfren1.name);
	//getchar();
	printf("����(M/F) :");
	scanf(" %c", &myfren1.sex); // %s�ڿ� %c�� ���Ͱ��� �ԷµǸ� %c�� �ԷµǾ� �����⿡ �Ѿ�� ���� �����ϱ� ���� ���� ���.
	printf("���� :");
	scanf("%d", &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp); //(void*)��������.
	fclose(fp);
}

void friend_read() {
	FILE* fp;
	Friend myfren2 = { 0 };
	/***file read****/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}