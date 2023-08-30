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
}Friend; // 구조체 정의


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
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("값이 잘못되었습니다. \n");
		}
	}
}

int main_menu()
{
	printf("---------------\n");
	printf("파일 제어 프로그램 v1.0\n");
	printf("---------------\n");
	printf("1. 친구 정보 쓰기\n");
	printf("2. 친구 정보 읽기\n");
	printf("3. 종료\n");
	printf("---------------\n");
	printf("메뉴선택 : ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void friend_write() {
	FILE* fp;
	Friend myfren1 = { 0 };
	/***file write***/
	fp = fopen("friend.bin", "wb");// 구조체는 보통 binary 모드로 사용
	printf("이름 :");
	scanf("%s", myfren1.name);
	//getchar();
	printf("성별(M/F) :");
	scanf(" %c", &myfren1.sex); // %s뒤에 %c라서 엔터값이 입력되면 %c에 입력되어 버리기에 넘어가는 것을 방지하기 위해 공간 띄움.
	printf("나이 :");
	scanf("%d", &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp); //(void*)생략가능.
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