#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[3] = { 0 }; // 3���� ����ִ� ����ü �迭
	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է�:");
		scanf("%s", arr[i].name); // ���ڿ� ������ �Էµ��� ����
		printf("��ȣ �Է�:");
		scanf("%s", arr[i].phoneNum);
		printf("���� �Է�:");
		scanf("%d", &arr[i].age);
	}
	
	for (int i = 0; i < 3; i++) {		
		printf("�̸�:%s\n", arr[i].name);
		printf("��ȣ:%s\n", arr[i].phoneNum);
		printf("����:%d\n", arr[i].age);
		printf("=========================\n");
	}
}