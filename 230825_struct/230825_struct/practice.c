#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person //����ü ���� ����.
{
	char name[20];
	char phonenum[20];
	int age;
	char addre[50];
};

int main()
{
	struct person st[4] = { 0 }; // ����ü ���� ����

	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է� :");
		scanf("%s", st[i].name); //���ڿ� ������ ó������ ����. �迭�ּҰ��̶� &�Ⱦ�.
		printf("��ȣ �Է� :");
		scanf("%s", st[i].phonenum); // &�Ⱦ�.
		printf("���� �Է� :");
		scanf("%d", &st[i].age); //����ü ���ǰ� int�� &��. 
		printf("�ּ� �Է� : ");
		scanf("%s", st[i].addre);
	}

	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s\n", st[i].name);
		printf("��ȭ��ȣ : %s\n", st[i].phonenum);
		printf("���� : %d\n", st[i].age);
		printf("�ּ� : %s\n", st[i].addre);
	}
}