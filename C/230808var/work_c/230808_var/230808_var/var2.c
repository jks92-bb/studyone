#include <stdio.h>

int main()
{
	char* a = "�̸�";
	char* b = "����";
	char* c = "��ȭ";
	char* d = "�ּ�";
	char* e = "Ű";
	char* f = "ȫ�浿";
	int g = 200.0;
	double h = 180.2;
	char o = 'B';
	float q = 489.34;
	char* p = "���� �Ѿ� ȫ�밨�� 11����";
	int age = 255;


	printf("���� : %d��\n", age);
	age = age + 539; // ���̸� 539 ����.
	printf("539�� �� ���� : %d��\n", age);

	double pi = 3.14159;
	printf("������ : %1f\n", pi);

	double radius = 5.0;
	double radius2 = radius * radius;
	double area = pi* radius2 ; //���� ���� ���
	printf("�������� %1f�� ���� ���� : %1f\n", radius, area);


	printf("-------------------------------\n");
	printf("������ ���� Ȯ�μ�\n");
	printf("-----------------------------\n");
	printf("%s : %s\n", a, f);
	printf("%s : 200\n", b);
	printf("%s : 010-1234-4321\n",c );
	printf("%s : %s\n", d, p);
	printf("%s : %.2fcm\n", e, h);
	printf("������ :%dkg\n", g);
	printf("������ : %c��\n", o);
	printf("�����Ҹ� �ϴ� : %.4f�Ҹ�", q);
	
}