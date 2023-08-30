#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();

//void person_write(PERSON person);
//void person_read();

typedef struct _person {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
}PERSON;

char* name[] = { "홍길동","전우치","이순신","강감찬"	,"안중근" };
int* age[] = { 10, 20, 30, 40, 50 };
char* tel[] = { "010-4567-1526","010-4567-4567" ,"010-4567-1567" ,"010-1597-1526" ,"010-4567-4826" };
char* addr[] = { "서울 서초구","서울 노원구","대구 동구","서울 강남구","서울 강북구" };




int main()
{
	while (1) {
		switch (main_menu()) {
		case 1: {
			PERSON per_arr[10] = { 0 };
			srand(time(NULL));
			FILE* fp = fopen("person.bin", "wb");
			if (fp == NULL) {
				printf("파일 쓰기 오픈 에러 \n");
				return -1;
			}
			for (int i = 0; i < 5; i++) {
				strcpy(per_arr[i].name, name[rand() % 5]);
				strcpy(per_arr[i].tel, tel[rand() % 5]);
				strcpy(per_arr[i].addr, addr[rand() % 5]);
				per_arr[i].age = age[rand() % 5];
				fwrite(&per_arr[i], sizeof(PERSON), 1, fp);
			}
			fclose(fp);
			printf("정상적으로 입력되었습니다.\n");
			break; }
		case 2:
		{
			srand(time(NULL));
			PERSON temp = { 0 };
			FILE* fp = fopen("person.bin", "rb");
			int cnt = 1;
			while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {				
				printf("번호 : %d 이름 : %s 나이 : %d 전화 번호: %s 주소 : %s \n", cnt++, temp.name, temp.age, temp.tel, temp.addr);
			}
			fclose(fp);
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

//void person_write(PERSON person) {
//
//	FILE* fp = fopen("person.bin", "wb");
//	if (fp == NULL) {
//		printf("파일 쓰기 오픈 에러 \n");
//		return -1;
//	}
//	for (int i = 0; i < 5; i++) {
//		strcpy(per_arr[i].name, name[rand() % 5]);
//		strcpy(per_arr[i].tel, tel[rand() % 5]);
//		strcpy(per_arr[i].addr, addr[rand() % 5]);
//		per_arr[i].age = age[rand() % 5];
//		fwrite(&per_arr[i], sizeof(per_arr), 1, fp);
//	}
//	flcose(fp);
//}

//void person_read() {
//	FILE* fp = fopen("person_arr.bin", "rb");
//	if (fp == NULL) {
//		printf("파일 읽기 오픈 에러 \n");
//		return -1;
//	}
//	for (int i = 0; i < 5; i++) {
//
//
//		printf("이름:%s\n", per_arr[i].name);
//		printf("번호:%s\n", per_arr[i].tel);
//		printf("주소:%s\n", per_arr[i].addr);
//		printf("나이 : %d\n", per_arr[i].age);
//		printf("--------------------------\n");
//		PERSON temp3 = { 0 };
//		// 파일에서 정상적으로 구조체 1개를 읽었다면
//		while (fread(&per_arr, sizeof(per_arr), 1, fp) == 1) {
//			printf("이름 : %s 나이 : %d 전화 번호: %s 주소 : %s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
//		}
//		fclose(fp);
//	}
//}









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