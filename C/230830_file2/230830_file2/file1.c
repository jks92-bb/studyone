#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _person {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
}PERSON;

int main()
{
	PERSON son = { "ȫ�浿",100, "010-1234-1234", "�Ѿ� ȫ�밨��" };
	PERSON so2 = { "�̼���",200, "010-6532-1234", "���� �θ޻��" };

	//���� ����.
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return -1;
	}

	fwrite(&son, sizeof(son), 1, fp);
	fwrite(&so2, sizeof(so2), 1, fp);
	printf("���Ͽ� ���������� ����Ǿ����ϴ�.\n");
	fclose(fp);

	//�����б�
	//FILE* fp2 = fopen("person.bin", "rb");
	//if (fp == NULL) {
	//	printf("���� �б� ���� ���� \n");
	//	return -1;
	//}

	//PERSON temp = { 0 }; //���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü.
	//fread(&temp, sizeof(temp), 1, fp2);
	//printf("�̸� : %s ���� : %d ��ȭ ��ȣ: %s �ּ� : %s \n", temp.name, temp.age, temp.tel, temp.addr);
	//fclose(fp2);

	//�����б�2
	FILE* fp3 = fopen("person.bin", "rb"); // fp�� ���� ������. fp =fopen("person.bin","rb") �̰͵� ������.
	if (fp3 == NULL) {
		printf("���� �б� ���� ���� \n");
		return -1;
	}

	PERSON temp3 = { 0 };
	// ���Ͽ��� ���������� ����ü 1���� �о��ٸ�
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("�̸� : %s ���� : %d ��ȭ ��ȣ: %s �ּ� : %s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);


	return;
}