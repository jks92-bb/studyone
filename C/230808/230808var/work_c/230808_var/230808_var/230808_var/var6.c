#include <stdio.h>

int main()
{
	// 많이 사용되는 파트는 반복문.
	int num1 = 12;
	int num2 = 12;
	printf("num1 : %d \n", num1);
	printf("num1++ : %d \n", num1++);
	printf("num1 : % d\n", num1);

	printf("num2 : %d \n", num2);
	printf("--num2 : %d \n", --num2);
	printf("num2 : % d\n", num2);

	return 0;
	// &&, ||, ! 중요하게 잘쓰임. 좋았어.

	//int result1, result2, result3; -> 쓰레기값이라서 현업에서는 사용안함.
	//int result1, reslt2, result3 =0; 이렇게라도 써야함.아니면 바로 밑에 result 값 다 넣어줘야 함.

	//& 주소의미.


}