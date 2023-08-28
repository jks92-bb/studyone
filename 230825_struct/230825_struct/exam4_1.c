#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main_menu();

struct car {
	char model[20];
	char price[20];
	int year;
	char color[10];
	char office[50];
};

struct customer {
	char name[20];
	char tel[20];
	char addr[20];
	char job[20];
	int age;
	struct car own;
};




int main()
{
	char* model[5] = { "포르쉐911","제네시스","소나타","아반떼" ,"k9" };
	char* price[5] = { "4천만원","5천만원", "7천만원", "8천만원", "1억원" };
	int year[5] = { 2020,2021,2022,2023,2024 };
	char* color[5] = { "노랑", "녹색", "파랑","빨강","흰색" };
	char* office[5] = { "대구", "인천", "부산", "전주", "춘천" };

	char* name[5] = { "정우성", "한지민", "이병헌", "주지훈", "박보영" };
	char* tel[5] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "010-4134-4587" };
	char* addr[5] = { "대구", "서울", "부산", "전주", "춘천" };
	char* job[5] = { "공무원", "회사원", "전문직", "사업가", "군인" };
	int age[5] = { 25,35,40,45,50 };

	struct customer cu[100] = { 0 };
	srand(time(NULL));

	while (1) {

		switch (main_menu()) {

		case 1:
			for (int i = 0; i < 100; i++) {

				strcpy(cu[i].name, name[rand() % 5]);
				strcpy(cu[i].addr, addr[rand() % 5]);
				strcpy(cu[i].tel, tel[rand() % 5]);
				strcpy(cu[i].job, job[rand() % 5]);
				cu[i].age = age[rand() % 5];

				strcpy(cu[i].own.model, model[rand() % 5]);
				strcpy(cu[i].own.price, price[rand() % 5]);
				cu[i].own.year = year[rand() % 5];
				strcpy(cu[i].own.color, color[rand() % 5]);
				strcpy(cu[i].own.office, office[rand() % 5]);
			}
			printf("정상적으로 데이터 입력되었습니다.\n");
			break;

		case 2:
			for (int i = 0; i < 100; i++) {

				printf("고객명 : %s\n", cu[i].name);
				printf("전화 : %s\n", cu[i].tel);
				printf("주소 : %s\n", cu[i].addr);
				printf("직업 : %s\n", cu[i].job);
				printf("나이 : %d\n", cu[i].age);
				printf("모델명 : %s\n", cu[i].own.model);
				printf("가격 : %s\n", cu[i].own.price);
				printf("색상 : %s\n", cu[i].own.color);
				printf("연식 : %d\n", cu[i].own.year);
				printf("영업소 : %s\n", cu[i].own.office);
				printf("-----------------------------\n");
			}

			break;
		case 3:
			printf("종료\n");
			exit(0);

		default:
			printf("잘못된 메뉴 입력!!\n");
			break;
		}
	}

}





int main_menu()
{
	printf("---------------------------\n");
	printf("고객차량 관리 프로그램 v1.5\n");
	printf("---------------------------\n");
	printf("1. 고객 및 구매 차량 입력\n");
	printf("2. 고객 및 구매 차량 보기\n");
	printf("3. 종료\n");
	printf("---------------------------\n");
	printf("메뉴 선택 : \n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}