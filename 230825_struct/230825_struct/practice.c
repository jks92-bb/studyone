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
	for (int i = 0; i < 4; i++) {
		printf("�̸� : ");
		scanf("%s", st[i].name); //�̸� �Է�
		printf("��ȭ��ȣ : ");
		scanf("%s", st[i].phonenum); // ��ȭ��ȣ �Է�
		printf("���� : ");
		scanf("%d", st[i].age); // ���� �Է�
		//printf("�ּ�: ");
		//scanf("%s", st[i].addre); //�ּ� �Է�

	}
	/*for (int i = 0; i < 4; i++) {
		printf("�̸� : %s\n", st[i].name);
		printf("��ȭ��ȣ : %s\n", st[i].phonenum);
		printf("���� : %d\n", st[i].age);
		printf("�ּ� : %s\n", st[i].addre);
	}*/
}