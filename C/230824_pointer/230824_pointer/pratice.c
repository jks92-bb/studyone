#include <stdio.h>

int main()
{
	int num1 = 304, num2 = 33;
	int* el = NULL; //el -> pointer 변수 초기화.
	int* e2 = NULL; //e2 -> pointer 변수 초기화.
	el = &num1;  // pointer 변수 el에 num1변수의 주소값 저장.
	(*el) += 42; //  el 주소값에 42추가.
	(*el) += 90;

	e2 = &num2; // pointer 변수 e2에 num2변수의 주소값 저장.
	(*e2) -= 90; // e1 주소값에 -90추가.

	printf("%d, %d\n", num1, num2); // num1,num2 변수에 저장된 값 출력.

	int n = 100;
	int* p = &n; //포인터 변수p에 변수n의 주소값을 참조.

	int arr[3] = { 10, 20, 30 };
	p = arr; // 포인터 변수p에 배열변수arr의 주소값을 참조.
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