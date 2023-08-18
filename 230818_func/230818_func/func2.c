#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void show_number(int n);
void show_number2(int n, int n2);


int main()
{
	// void 함수명()
	// void 함수명(매개변수,...,...) -> 매개변수는 n 개 가능.
	


	// 반드시 매개변수가 있는 함수를 호출할 경우
	// ()안에 매개변수로 전달하는 값(변수)을 넣어줌.
	show_number(100);
	int n = 100;
	int n2 = 200;
	show_number2(n, n2); //show_number2(100, 200)와 같은 의미. 함수 인자 순서는 정의된 함수 인자와 동일하게 . 순서다르게 하면 다르게 나타남.
}

// 코딩 스타일
//  스네이크 방식 : show_number -> C언어
// 카멜방식 : showNumber -> 자바 (객체지향)
// 파스칼 방식 : ShowNumber -> c++, c#(객체지향)

void show_number(int n) // 매개변수(인자, 인수)가 있는 함수의 정의. '지금 여기서 int n'은 매개변수
{
	int sum = n + 100;
	printf("함수의 변수1 sum: %d\n", sum);

}

void show_number2(int n, int n2) // 매개변수가 있는 함수의 정의.
{
	int sum = n + n2;
	printf("함수의 변수2 sum: %d\n", sum);

} //{}안에서 사용되는 변수는 지역(로컬local)변수라고 한다ㅏ. 지역변수로서 지역변수 안에서만 사용 되어지고 사라짐.






