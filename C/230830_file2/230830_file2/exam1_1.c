#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void person_write();
void person_read();

typedef struct _person {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
}PERSON;


const char* name[] = { "ȫ�浿", "����ġ", "�̼���", "������"	,"���߱�" };
const int* age[] = { 10, 20, 30, 40, 50 };
const char* tel[] = { "010-4567-1526", "010-4567-4567" , "010-4567-1567" , "010-1597-1526" ,"010-4567-4826" };
const char* addr[] = { "���� ���ʱ�", "���� �����", "�뱸 ����", "���� ������", "���� ���ϱ�" };

PERSON per_arr[10] = { 0 };

int main()
{
	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			person_write();
			break;

		case 2:
		{
			person_read();
			break;
		}

		case 3:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
			break;
		}

	}

}

void person_write()
{

	srand(time(NULL));
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ���� \n");
		return ;
	}
	for (int i = 0; i < 5; i++) {
		strcpy(per_arr[i].name, name[rand() % 5]);
		strcpy(per_arr[i].tel, tel[rand() % 5]);
		strcpy(per_arr[i].addr, addr[rand() % 5]);
		per_arr[i].age = age[rand() % 5];
		fwrite(&per_arr[i], sizeof(per_arr[i]), 1, fp);
	}
	fclose(fp);
	printf("������ �����Ͱ� ���Ͽ� ����Ǿ����ϴ�.\n");
}

void person_read() {
	FILE* fp = fopen("person_arr.bin", "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ���� \n");
		return ;
	}
	
	PERSON temp3 = { 0 };
	//���Ͽ��� ���������� ����ü 1���� �о��ٸ�
	while (fread(&temp3, sizeof(temp3), 1, fp) == 1) {
		printf("�̸� : %s ���� : %d ��ȭ ��ȣ: %s �ּ� : %s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp);
}


int main_menu() {
	printf("-----------------\n");
	printf("���� ���� ���α׷�v1.0\n");
	printf("-----------------\n");
	printf("1. ������ ������ ���� �Է�\n");
	printf("2. ���Ͽ��� �о����\n");
	printf("3. ����\n");
	printf("-----------------\n");
	printf("�޴�����\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

//srand(time(NULL));
//PERSON temp = { 0 };
//FILE* fp = fopen("person.bin", "rb");
//int cnt = 1;
//while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
//	printf("��ȣ : %d �̸� : %s ���� : %d ��ȭ ��ȣ: %s �ּ� : %s \n", cnt++, temp.name, temp.age, temp.tel, temp.addr);
//}
//fclose(fp);
//