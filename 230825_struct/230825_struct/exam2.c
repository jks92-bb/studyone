#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct prefessor {
	char name[20]; //������
	char major[20]; //��������
	int age;
};

struct student {
	char name[20];
	char phone[20];
	int age;
	char addr[50];
	struct prefessor pro; //��米��
};

int main()
{
	struct student inf[100] = { 0 };
	srand(time(NULL));
	char* name[5] = { "ȫ�浿","������", "���޼�", "���켺", "��â��" };
	char* addr[5] = { "�뱸", "����", "�λ�", "����", "�ͻ�" };
	int age[5] = { 20, 30, 40, 50, 60 };
	char* phone[5] = { "010-4566-4567", "010-7566-4567" , "010-4776-7767" , "010-4566-9999" , "010-4586-4467" };
	char* pro_name[5] = { "��â��", "������", "�̼���", "��ƶ�", "������" };


	for (int i = 0; i < 100; i++) {

		strcpy(inf[i].name, name[rand() % 5]); //100���� �迭�� �߿��� 1���� �����ؼ� ����.
		strcpy(inf[i].addr, addr[rand() % 5]); // ���ڿ��� �������� �ٷ� �̾Ƴ� �� ���� strcpy �����.
		inf[i].age = age[rand() % 5];
		strcpy(inf[i].phone, phone[rand() % 5]);
		inf[i].pro.age = age[rand() % 5];
		strcpy(inf[i].pro.name, pro_name[rand() % 5]);
	}

	for (int i = 0; i < 100; i++) {
		printf("<<<%d��° �л�����>>>>\n", i + 1);
		printf("�̸� : %s\n", inf[i].name);
		printf("�ּ� : %s\n", inf[i].addr);
		printf("���� : %d\n", inf[i].age);
		printf("��ȭ��ȣ : %s\n", inf[i].phone);
		printf("���� ���� : %d\n", inf[i].pro.age);
		printf("���� �̸� : %s\n", inf[i].pro.name);
		printf("----------------------\n");
	}

	/*inf[0].pro.age = 50;
	strcpy(inf[0].pro.name, "�豳��");
	printf("%s �л��� ��� ���� : %s \n", inf[0].name, inf[0].pro.name);*/







}

