#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void phone(char number[]);

typedef struct customer {
	char name[20];
	int age;
	char phone[20];
	char addr[50];
	char class[10];
}customer;

typedef struct car {
	char type[20];
	char number[20];
	struct customer owner;
}car;

int main()
{
	customer kor[10] = { 0 };
	srand(time(NULL));
	char number[12];
	phone(number);
	char* name[10] = { "���켺", "������", "�̺���", "������", "�ں���", "������", "�̽±�", "��ȣ��", "���缮", "���ϴ�" };
	char* addr[10] = { "�뱸", "����", "�λ�", "����", "��õ", "��õ", "����", "����", "����", "õ��" };
	//char* phone[10] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "�ں���", "������", "�̽±�", "��ȣ��", "���缮", "���ϴ�" };
	int age[5] = { 25,35,40,45,50 };

	for (int i = 0; i < 10; i++) {
		strcpy(kor[i].name, name[rand() % 10]);

		strcpy(kor[i].name, name[rand() % 10]);
		strcpy(kor[i].name, name[rand() % 10]);
		kor[i].age = age[rand() % 5];
	}


	for (int i = 0; i < 10; i++) {

		printf("%s\n", kor[i].name);
		printf("%s\n", number);
	}

}




void phone(char number[]) {
	// �޴��� ��ȣ�� ù ��° ���ڴ� �׻� 0
	number[0] = '0';

	// 2~3��° ���ڴ� �����ϰ� 1~4 ������ ��
	number[1] = '1';
	number[2] = '0';

	// ������ 8�ڸ��� ������ ���� ����
	for (int i = 3; i < 11; i++) {
		number[i] = '0' + rand() % 10;
	}

	// ���ڿ� ���� ��Ÿ���� �� ���� �߰�
	number[11] = '\0';

	for (.....)
}





