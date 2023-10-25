#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int add(int n1, int n2);
int sub(int n1, int n2);


void main()
{
	//리턴값의 데이터타입 함수명(매개변수,...)
	//printf 함수 
	//-> 표준함수(프로그래밍 언어에서 제공해주는 함수.)


	int n1 = 200; // 지역변수
	int n2 = 50;

	// add() 함수 호출해서 리턴값을 출력
	int a = add(n1, n2);
	printf("리턴값 : %d", a);


	int b = sub(n1, n2);
	printf("리턴값 : %d", sub(n1, n2));

}

int add(int n1, int n2) // 빈 껍데기 호출했을때 값이 채워짐.
{
	return n1 + n2;
	}

int sub(int n1, int n2)
{
	int res = n1 - n2;
	return res;
}
//함수
//
//유형1: 데이터 타입 함수명(매개변수) { return값 }
//유형2: void함수명(매개변수)
//유형3 : 데이터 타입 함수명() { return값 }
//유형4: void함수명()
//
//반환값이 없다는 말은 void.
