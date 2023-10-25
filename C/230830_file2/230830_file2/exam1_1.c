#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void person_write();
void person_read();

typedef struct _person {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
}PERSON;


const char* name[] = { "홍길동", "전우치", "이순신", "강감찬"	,"안중근" };
const int* age[] = { 10, 20, 30, 40, 50 };
const char* tel[] = { "010-4567-1526", "010-4567-4567" , "010-4567-1567" , "010-1597-1526" ,"010-4567-4826" };
const char* addr[] = { "서울 서초구", "서울 노원구", "대구 동구", "서울 강남구", "서울 강북구" };

PERSON per_arr[10] = { 0 };

int main()
{
	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			person_write();
			break;

		case 2:
		{
			person_read();
			break;
		}

		case 3:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 값을 입력하셨습니다.\n");
			break;
		}

	}

}

void person_write()
{

	srand(time(NULL));
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러 \n");
		return ;
	}
	for (int i = 0; i < 5; i++) {
		strcpy(per_arr[i].name, name[rand() % 5]);
		strcpy(per_arr[i].tel, tel[rand() % 5]);
		strcpy(per_arr[i].addr, addr[rand() % 5]);
		per_arr[i].age = age[rand() % 5];
		fwrite(&per_arr[i], sizeof(per_arr[i]), 1, fp);
	}
	fclose(fp);
	printf("랜덤한 데이터가 파일에 저장되었습니다.\n");
}

void person_read() {
	FILE* fp = fopen("person_arr.bin", "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 에러 \n");
		return ;
	}
	
	PERSON temp3 = { 0 };
	//파일에서 정상적으로 구조체 1개를 읽었다면
	while (fread(&temp3, sizeof(temp3), 1, fp) == 1) {
		printf("이름 : %s 나이 : %d 전화 번호: %s 주소 : %s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp);
}


int main_menu() {
	printf("-----------------\n");
	printf("파일 제어 프로그램v1.0\n");
	printf("-----------------\n");
	printf("1. 랜덤한 데이터 파일 입력\n");
	printf("2. 파일에서 읽어오기\n");
	printf("3. 종료\n");
	printf("-----------------\n");
	printf("메뉴선택\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

//srand(time(NULL));
//PERSON temp = { 0 };
//FILE* fp = fopen("person.bin", "rb");
//int cnt = 1;
//while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
//	printf("번호 : %d 이름 : %s 나이 : %d 전화 번호: %s 주소 : %s \n", cnt++, temp.name, temp.age, temp.tel, temp.addr);
//}
//fclose(fp);
//