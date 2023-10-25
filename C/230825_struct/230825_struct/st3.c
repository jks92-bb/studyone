#include <stdio.h>

// 구조체 정의 person
struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person p = { "홍길동", "010-1234-1111", 200 };
	printf("이름:%s 번호:%s 나이:%d\n",
		p.name, p.phoneNum, p.age);
}