#include <stdio.h>
void change(int a, int b); //a�� b�� ���� �ٲ��ִ� �Լ�.

int main()
{
	//2���� ���� (a,b)�� �����Ѵ�.
	int a = 1;
	int b = 2;
	//a�� b�� ���� ����غ���.
	printf("%d %d\n", a, b);
	change(a, b);
}

void change(int a, int b) {
	int* temp[] = { 0 }; // ����� �Լ� �ϳ� �����.
	*temp = a; // a�� ���� ������� �ִ´�.
	a = b; 
	b = *temp;
	printf("%d %d", a, b);
}


