#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct person // ����ü ���� ����
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person arr[3] = { 0 }; //����ü ���� ����

	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է� :");
		scanf("%s", arr[i].name); //���ڿ� ������ ó������ ����. �迭�ּҰ��̶� &�Ⱦ�.
		printf("��ȣ �Է� :");
		scanf("%s", arr[i].phonenum); // &�Ⱦ�.
		printf("���� �Է� :");
		scanf("%d", &arr[i].age); //����ü ���ǰ� int�� &��. 
	}

	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s\n", arr[i].name);
		printf("��ȣ : %s\n", arr[i].phonenum);
		printf("���� : %d\n", arr[i].age);
	}

	
}