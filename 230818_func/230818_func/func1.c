#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void greeting(); // main 함수 아래에 정의가 있으면 기입.

int main()
{
	greeting(); // greeting 함수 정의를 호출함.
	printf("main 함수의 다른 동작\n");
	greeting();
}

// 함수의 정의는 실행되지 못함. -> 
// 사용하기 위해서는 다른 함수에서 해당 함수 호출이 필요.
void greeting() // 내가 만든 함수의 정의
{
	printf(">>>>함수시작<<<<\n");
	printf("안녕\n");
	printf("반가워\n");
	printf(">>>>함수종료<<<<\n");
}