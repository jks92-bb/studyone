#include <stdio.h>
void swap(int* a, int* b);

int main()
{	// int�� ���� a�� �� ����.
	int a = 3; 
	// int�� ���� b�� �� ����.
	int b = 6;
	printf("a= %d, b= %d\n", a, b); // - a,b�� ���
	swap(&a, &b); // a,b �� ��ü�Լ� ���.
	printf("a= %d, b= %d\n", a, b);	// a,b ��ü �Լ� �Ͽ��� ����� ���.
}

void swap(int* a, int* b) // ���� 2�� �� ���� �����ϴ� �Լ�
{
	int temp = *a;	// ����� temp�� a�� �ּ� �ִ´�.
	*a = *b;		// b �ּҰ��� a�ּҰ��� ���� �ִ´�.
	*b = temp;		// ������� �־��� a�ּҰ��� b�ּҰ��� �ִ´�.
}