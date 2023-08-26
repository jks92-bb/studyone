#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person //구조체 정의 선언.
{
	char name[20];
	char phonenum[20];
	int age;
	char addre[50];
};

int main()
{
	struct person st[4] = { 0 }; // 구조체 형태 선언
	for (int i = 0; i < 4; i++) {
		printf("이름 : ");
		scanf("%s", st[i].name); //이름 입력
		printf("전화번호 : ");
		scanf("%s", st[i].phonenum); // 전화번호 입력
		printf("나이 : ");
		scanf("%d", st[i].age); // 나이 입력
		//printf("주소: ");
		//scanf("%s", st[i].addre); //주소 입력

	}
	/*for (int i = 0; i < 4; i++) {
		printf("이름 : %s\n", st[i].name);
		printf("전화번호 : %s\n", st[i].phonenum);
		printf("나이 : %d\n", st[i].age);
		printf("주소 : %s\n", st[i].addre);
	}*/
}