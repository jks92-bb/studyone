#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int add(int n1, int n2);
void resul(int num);
int readnum();
void how();


void main()
{
	int result, n1, n2;
	how();
	n1 = readnum();
	n2 = readnum();
	result = add(n1, n2);
	resul(result);
	return 0;

}

int add(int n1, int n2)
{
	return n1 + n2;
}

void resul(int sum)
{
	printf("������� ��� : %d\n", sum);
}

int readnum()
{
	int num;
	scanf("%d", &num);
	return num;
}

void how()
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("�� ���� ������ �Է��ϼ���.\n");
}




