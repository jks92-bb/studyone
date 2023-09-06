#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>


int main()
{
	money all[3] = { 0 };
	int p[] = { 3000, 4000, 5000, 7000, 10000, 20000 };
	srand(time(NULL));

	for (int i = 0; i < 3; i++) {
		all[i].won = p[rand() % 6];
		all[i].dollar = all[i].won / 1400;
		all[i].jpy = all[i].won / 9;
		printf("\n");
		st(i);
		printf("원화 : %d￦\n", all[i].won);
		printf("달러 : %d＄\n", all[i].dollar);
		printf("엔화 : %d￥\n", all[i].jpy);
	}
}