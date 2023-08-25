#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct person // 구조체 정의 선언
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person arr[3] = { 0 }; //구조체 형태 선언

	for (int i = 0; i < 3; i++) {
		printf("이름 입력 :");
		scanf("%s", arr[i].name); //문자열 공백은 처리되지 않음. 배열주소값이라 &안씀.
		printf("번호 입력 :");
		scanf("%s", arr[i].phonenum); // &안씀.
		printf("나이 입력 :");
		scanf("%d", &arr[i].age); //구조체 정의가 int라서 &씀. 
	}

	for (int i = 0; i < 3; i++) {
		printf("이름 : %s\n", arr[i].name);
		printf("번호 : %s\n", arr[i].phonenum);
		printf("나이 : %d\n", arr[i].age);
	}

	
}