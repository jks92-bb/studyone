#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//void phone(char number[]);

typedef struct car {
	char type[20];
	char number[20];
	
}car;

typedef struct customer {
	char name[20];
	int age;
	char phone[20];
	char addr[50];
	char cla[10];
	struct car owner;
}customer;



int main()
{
	customer kor[10] = { 0 };
	
	srand(time(NULL));
	char* name[10] = { "정우성", "한지민", "이병헌", "주지훈", "박보영", "김태희", "이승기", "강호동", "유재석", "김하늘" };
	char* addr[10] = { "대구", "서울", "부산", "전주", "춘천", "인천", "대전", "광주", "세종", "천안" };
	char* phone[10] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "010-4134-4587", "010-4134-1237",
		"010-4134-7894", "010-4134-4587", "010-4134-4587", "010-1598-4587" };
	int age[5] = { 25,35,40,45,50 };
	char* own_type[4] = { "포르쉐911","제네시스","소나타","아반떼" };
	
	

	for (int i = 0; i < 10; i++) {
		strcpy(kor[i].name, name[rand() % 10]);
		strcpy(kor[i].phone, phone[rand() % 10]);
		strcpy(kor[i].addr, addr[rand() % 10]);
		strcpy(kor[i].owner.type, own_type[rand() % 10]);
		kor[i].age = age[rand() % 5];
		
	}


	for (int i = 0; i < 10; i++) {

		printf("%s\n", kor[i].name);
		printf("%s\n", kor[i].phone);
		printf("%s\n", kor[i].addr);
		printf("%d\n", kor[i].age);
		printf("--------------\n");

	}
	
}




//void phone(char number[]) {
//	// 휴대폰 번호의 첫 번째 숫자는 항상 0
//	number[0] = '0';
//
//	// 2~3번째 숫자는 랜덤하게 1~4 사이의 수
//	number[1] = '1';
//	number[2] = '0';
//
//	// 나머지 8자리는 랜덤한 숫자 생성
//	for (int i = 3; i < 11; i++) {
//		number[i] = '0' + rand() % 10;
//	}
//
//	// 문자열 끝을 나타내는 널 문자 추가
//	number[11] = '\0';
//	
//			
//}





