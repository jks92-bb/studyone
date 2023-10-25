#include <stdio.h>
void swap(int* a, int* b);

int main()
{	// int형 변수 a에 값 저장.
	int a = 3; 
	// int형 변수 b에 값 저장.
	int b = 6;
	printf("a= %d, b= %d\n", a, b); // - a,b값 출력
	swap(&a, &b); // a,b 값 교체함수 사용.
	printf("a= %d, b= %d\n", a, b);	// a,b 교체 함수 하용한 결과값 출력.
}

void swap(int* a, int* b) // 변수 2개 값 서로 스왑하는 함수
{
	int temp = *a;	// 빈공간 temp에 a값 주소 넣는다.
	*a = *b;		// b 주소값을 a주소값에 값을 넣는다.
	*b = temp;		// 빈공간에 넣어진 a주소값을 b주소값에 넣는다.
}