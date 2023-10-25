#include <stdio.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[3] = {
		{"이승기", "010-1234-1234", 21},
		{"정지영", "010-1234-1111", 22},
		{"한지수", "010-1234-2222", 19}
	};

	for (int i = 0; i < 3; i++) {
		printf("이름:%s\n", arr[i].name);
		printf("번호:%s\n", arr[i].phoneNum);
		printf("나이:%d\n", arr[i].age);
		printf("=========================\n");
	}
}