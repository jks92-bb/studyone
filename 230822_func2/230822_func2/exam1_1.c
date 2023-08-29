#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
void check_odd(int a[]);

int main()
{
	// 1.main()에서 10개의 숫자를 저장하는 1차원 배열 생성.
	// 2. 랜덤하게 10개의 숫자를 배열에 저장.
	// 3. 배열의 주소값을 매개변수로 전달하고 홀,짝을 구분하여 출력 함수

	srand(time(NULL)); // 매번 다른 시드값 생성

	int random = 0;// 난수를 저장할 변수
	int arr[10] = { 0 }; //10개의 숫자를 저장하는 1차원 배열

	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1;
		//printf("%d\n", random);
		arr[i] = random; //arr[0]~arr[9] 에 난수를 저장.
	}
	check_odd(arr);
}

void check_odd(int a[])
{

	for (int i = 0; i < 10; i++) {
		
		if (a[i] % 2 == 0)
		{
			printf("%d는 짝수 이다.\n", a[i]);
		}

		else
		{
			printf("%d는 홀수 이다.\n", a[i]);
		}
		
	}

}