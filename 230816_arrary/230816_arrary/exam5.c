#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	// 1차원 배열 dmz에 지뢰가 아래처럼 매설되었음.
	// * B * B * 
	// 1 1 2 1 1
	// * : 지뢰가 없는 땅, B: 지뢰.
	char dmz[] = { '*', 'B', '*', 'B', '*' };
	int arr[5] = { 0 };
	int i = 0;

	if (dmz[0] == '*') {printf("안전지대\n");}

	if (dmz[1] == 'B') {
		printf("지뢰\n");
	}
		
	for (int i = 0; i < 5; i++) {
		if(i=0, 0=='*')

		printf("%d");
	}
}