#include <stdio.h>

int main()
{
	int num1 = 304, num2 = 33;
	int* el = NULL; //el -> pointer ���� �ʱ�ȭ.
	int* e2 = NULL; //e2 -> pointer ���� �ʱ�ȭ.
	el = &num1;  // pointer ���� el�� num1������ �ּҰ� ����.
	(*el) += 42; //  el �ּҰ��� 42�߰�.
	(*el) += 90;

	e2 = &num2; // pointer ���� e2�� num2������ �ּҰ� ����.
	(*e2) -= 90; // e1 �ּҰ��� -90�߰�.

	printf("%d, %d\n", num1, num2); // num1,num2 ������ ����� �� ���.

	int n = 100;
	int* p = &n; //������ ����p�� ����n�� �ּҰ��� ����.

	int arr[3] = { 10, 20, 30 };
	p = arr; // ������ ����p�� �迭����arr�� �ּҰ��� ����.
	for (int i = 0; i < 3; i++) {
		printf("p[%d]=%d\t", i, p[i]);
		printf("*(p+%d)=%d ", i, *(p + i));
		printf("arr[%d]=%d\n", i, arr[i]);
	}






}

void pratice()

{
	int zero = 0;
	int option = 0;





}