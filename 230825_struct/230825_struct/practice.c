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

	for (int i = 0; i < 3; i++) {
		printf("이름 입력 :");
		scanf("%s", st[i].name); //문자열 공백은 처리되지 않음. 배열주소값이라 &안씀.
		printf("번호 입력 :");
		scanf("%s", st[i].phonenum); // &안씀.
		printf("나이 입력 :");
		scanf("%d", &st[i].age); //구조체 정의가 int라서 &씀. 
		printf("주소 입력 : ");
		scanf("%s", st[i].addre);
	}

	for (int i = 0; i < 3; i++) {
		printf("이름 : %s\n", st[i].name);
		printf("전화번호 : %s\n", st[i].phonenum);
		printf("나이 : %d\n", st[i].age);
		printf("주소 : %s\n", st[i].addre);
	}
}