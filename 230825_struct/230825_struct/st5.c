#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[3] = { 0 }; // 3개의 비어있는 구조체 배열
	for (int i = 0; i < 3; i++) {
		printf("이름 입력:");
		scanf("%s", arr[i].name); // 문자열 공백은 입력되지 않음
		printf("번호 입력:");
		scanf("%s", arr[i].phoneNum);
		printf("나이 입력:");
		scanf("%d", &arr[i].age);
	}
	
	for (int i = 0; i < 3; i++) {		
		printf("이름:%s\n", arr[i].name);
		printf("번호:%s\n", arr[i].phoneNum);
		printf("나이:%d\n", arr[i].age);
		printf("=========================\n");
	}
}