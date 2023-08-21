#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void my_sort(int n1, int n2, int n3);



int main()
{
	// 1. 3개의 숫자를 main()에서 입력받아서 한꺼번에 매개변수에 전달.
	// 2. 함수에서 3개의 숫자를 크기 순서대로 출력.
	// 3. 함수이름 : my_sort()
	// 4. n1 > n2 > n3 --> 
	// 5. 출력결과 : n1> n2 >n3

	printf("3개의 숫자를 입력하시오.\n");
	int n1 = 0, n2 = 0, n3 = 0;
	scanf("%d %d %d", &n1, &n2, &n3);
	my_sort(n1, n2, n3);

}

void my_sort(int n1, int n2, int n3)
{

	
		while (1) {
			if (n1 > n2 && n2 > n3) {
				printf("%d>%d>%d", n1, n2, n3);
				break;
			}
			else if (n1 > n2 && n3 > n2 && n1 > n3) {
				printf("%d>%d>%d", n1, n3, n2);
				break;
			}
			else if (n2 > n1 && n2 > n3 && n1 > n3) {
				printf("%d>%d>%d", n2, n1, n3);
				break;
			}
			else if (n3 > n1 && n3 > n2 && n2 > n1) {
				printf("%d>%d>%d", n3, n2, n1);
				break;
			}
			else if (n3 > n1 && n3 > n2 && n1 > n2) {
				printf("%d>%d>%d", n3, n1, n2);
				break;
			}
			/*else {
				printf("숫자 다시 입력하시오.\n");
				
				break;*/
			}
			
		
		
	



	//printf("%d>%d>%d\n", n1, n2, n3);

}