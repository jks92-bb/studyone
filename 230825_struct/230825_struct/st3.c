#include <stdio.h>

// ����ü ���� person
struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person p = { "ȫ�浿", "010-1234-1111", 200 };
	printf("�̸�:%s ��ȣ:%s ����:%d\n",
		p.name, p.phoneNum, p.age);
}