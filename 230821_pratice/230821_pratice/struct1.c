#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void st(i);


struct money {
	int won;
	int dollar;
	int jpy;
	int sum;
};


int main()
{
	struct money all[3] = { 0 };
	int p[] = { 3000, 4000, 5000, 7000, 10000, 20000 };
	srand(time(NULL));

	for (int i = 0; i < 3; i++) {
		all[i].won = p[rand() % 6];
		all[i].dollar = all[i].won/1400;
		all[i].jpy = all[i].won/9;
		printf("\n");
		st(i);
		printf("원화 : %d￦\n", all[i].won);
		printf("달러 : %d＄\n", all[i].dollar);
		printf("엔화 : %d￥\n", all[i].jpy);
	}
}


void st(i)
{
	
	if (i == 0) {
		printf("==========주식==========\n");
	}
	if (i == 1) {
		printf("==========채권==========\n");
	}
	if (i == 2) {
		printf("==========부동산==========\n");
	}
	
}