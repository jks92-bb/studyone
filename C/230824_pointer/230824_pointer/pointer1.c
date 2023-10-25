#include <stdio.h>

int main()
{
	int num = 10;
	printf("1.num(변수에 저장된 값):%d\n", num);
	printf("2.num(num변수의 실제 주소값):0x%p\n", &num);

	//포인터 변수 pnum에 num변수의 주소값 저장.
	int* pnum = &num;
	printf("3.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum);
	*pnum = 20; //num=2
	printf("4.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum);

	printf("5.num(변수에 저장된 값):%d\n", num);
	printf("6.pnum(pnum변수의 저장된 주소값):0x%p\n", pnum);
	
}
