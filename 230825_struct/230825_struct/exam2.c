#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct prefessor {
	char name[20]; //교수명
	char major[20]; //전공과목
	int age;
};

struct student {
	char name[20];
	char phone[20];
	int age;
	char addr[50];
	struct prefessor pro; //담당교수
};

int main()
{
	struct student inf[100] = { 0 };
	srand(time(NULL));
	char* name[5] = { "홍길동","김정식", "오달수", "정우성", "신창섭" };
	char* addr[5] = { "대구", "서울", "부산", "포항", "익산" };
	int age[5] = { 20, 30, 40, 50, 60 };
	char* phone[5] = { "010-4566-4567", "010-7566-4567" , "010-4776-7767" , "010-4566-9999" , "010-4586-4467" };
	char* pro_name[5] = { "김창식", "김정일", "이성계", "김아람", "정성우" };


	for (int i = 0; i < 100; i++) {

		strcpy(inf[i].name, name[rand() % 5]); //100개의 배열값 중에서 1개를 추출해서 복사.
		strcpy(inf[i].addr, addr[rand() % 5]); // 문자열은 랜덤에서 바로 뽑아낼 수 없고 strcpy 써야함.
		inf[i].age = age[rand() % 5];
		strcpy(inf[i].phone, phone[rand() % 5]);
		inf[i].pro.age = age[rand() % 5];
		strcpy(inf[i].pro.name, pro_name[rand() % 5]);
	}

	for (int i = 0; i < 100; i++) {
		printf("<<<%d번째 학생정보>>>>\n", i + 1);
		printf("이름 : %s\n", inf[i].name);
		printf("주소 : %s\n", inf[i].addr);
		printf("나이 : %d\n", inf[i].age);
		printf("전화번호 : %s\n", inf[i].phone);
		printf("교수 나이 : %d\n", inf[i].pro.age);
		printf("교수 이름 : %s\n", inf[i].pro.name);
		printf("----------------------\n");
	}

	/*inf[0].pro.age = 50;
	strcpy(inf[0].pro.name, "김교수");
	printf("%s 학생의 담당 교수 : %s \n", inf[0].name, inf[0].pro.name);*/







}

