#include <stdio.h>

int main()
{
	int n = 100;
	int* p = &n; //	�����ͺ��� p�� ����n�� �ּҰ��� ���� , �ּҰ��� ����ϱ� ���� &�� �����.
	// int *p=NULL;
	// P = &n;

	int arr[5] = { 10, 20, 30, 40, 50 };
	// ������ ���� p�� �迭���� arr�� �ּҰ��� ����
	p = arr;
	printf("p[0] :%d\n", p[0]);
	printf("*p :%d\n", *p);
	printf("arr[0]:%d\n", arr[0]);

	printf("p[1] :%d\n", p[1]);
	printf("*(p+1) :%d\n", *(p+1));
	printf("arr[1]:%d\n", arr[1]);

	//���� printf����� �ݺ����� ����Ͽ� ���.

	for (int i = 0; i < 5; i++) {
		printf("p[%d] :%d\n",i, p[i]);
		printf("*(p+%d) :%d\n",i, *(p + i));
		printf("arr[%d]:%d\n",i, arr[i]);
	}
}