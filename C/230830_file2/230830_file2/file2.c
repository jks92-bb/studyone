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
	PERSON son[2] = {
		{"ȫ�浿",100, "010-1234-1234", "�Ѿ� ȫ�밨��"},
		{"�̼���",200, "010-6532-1234", "���� �θ޻��" }
	};
	//���� ����.
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return -1;
	}

	fwrite(&son[0], sizeof(PERSON), 1, fp); // PERSON�� ������. SON=&SON[0]
	fwrite(&son[1], sizeof(son[1]), 1, fp); // SON+1 =&SON[1]
	printf("���Ͽ� ���������� ����Ǿ����ϴ�.\n");
	fclose(fp);

	//�����б�2
	FILE* fp3 = fopen("person_arr.bin", "rb");
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