#include <stdio.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[3] = {
		{"�̽±�", "010-1234-1234", 21},
		{"������", "010-1234-1111", 22},
		{"������", "010-1234-2222", 19}
	};

	for (int i = 0; i < 3; i++) {
		printf("�̸�:%s\n", arr[i].name);
		printf("��ȣ:%s\n", arr[i].phoneNum);
		printf("����:%d\n", arr[i].age);
		printf("=========================\n");
	}
}