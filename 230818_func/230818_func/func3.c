#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int get_number();
char get_char();


void main()
{

	// 반환값의 데이터타입 함수명() {return값}  
	// return한 200의 값을 변수n에 저장.
	int n = get_number();
	printf("리턴받은 값: %d\n", n);

	char t = get_char();
	printf("리턴받은 값: %c\n", t);

	// 변수를 사용해서 리턴값을 받지 않고
	// 직접 함수 리턴값을 %d에 전달
	printf("함수 리턴값 :%c\n", get_char());

}

int get_number()
{
	int n = 200;
	return n; //  함수가 종료되기 전에 return 값을
	// 호출한 곳으로 되돌려줌.
	// 리턴값은 1개의 값만 가능.
	//void 후에 함수가 아니니 return.
}

char get_char()
{
	char c = 'B';
	return c;
}



