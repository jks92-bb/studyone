#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_arr(int arr[]);



int main()
{
	// 1. 배열 변수를 매개변수로 전달하는 방법
	// 2. 지역변수, 전역변수 개념 이해 및 활용.
	// 3. call by value(값에 의한 전달)
	// 4. call by address(주소값에 의한 전달)




	// 배열 : 정보를 저장할 수 있는 연속적인 공간
	int arr[10] = { 0 }; //  정수값을 10개 저장할 수 있는 배열 변수 arr
	int a;		// 정수값을 1개만 저장하는 일반 변수 a

	// 1~10 까지를 arr 배열에 저장.
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;

	}
	show_arr(arr);
}


void show_arr(int a[])// -> int a[] 값을 넣어주기 전에는 그냥 빈 공간일뿐이다. 위에서 걸어주면 실행.
{
	// main에서 만든 배열을 이 함수에서 출력.
	// arr배열 변수의 주소값을 매개변수로 전달.
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n",i, a[i]);
	}

}