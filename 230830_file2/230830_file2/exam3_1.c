#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()
int main_menu();
void customer_write(char filename[]);
void customer_read(char filename[]);
void customer_write1(char filename[]);
void del_all_cust(char filename[]);

typedef struct _CAR {
	char model[20];
	char price[20];
	int year;

}CAR;

typedef struct _CUS {
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}cust;
cust inf_arr[10] = { 0 };

char* model[5] = { "포르쉐911","제네시스","소나타","아반떼" ,"k9" };
char* price[5] = { "4천만원","5천만원", "7천만원", "8천만원", "1억원" };
int year[5] = { 2019,2020,2021,2022,2023 };

char* name[5] = { "정우성", "한지민", "이병헌", "주지훈", "박보영" };
char* tel[5] = { "010-4578-7586", "010-4534-4587", "010-4324-4587", "010-4134-4587", "010-4134-4587" };
char* addr[5] = { "대구", "서울", "부산", "전주", "춘천" };

int main()
{
	char filename[] = "customer.bin";

	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1:
			customer_write1(filename);
			break;
		case 2:
			customer_write(filename);
			break;
		case 3:
			customer_read(filename);
			break;
		case 4:
			del_all_cust(filename);
			break;
		case 5:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 값을 입력하였습니다.\n");
			break;
		}
	}
}

int main_menu() {
	printf("-----------------\n");
	printf("고객 차량 관리 프로그램v1.0\n");
	printf("-----------------\n");
	printf("1. 고객 정보 직접 입력\n");
	printf("2. 고객 정보 랜덤 입력\n");
	printf("3. 고객 정보 보기\n");
	printf("4. 고객 정보 전체 삭제\n");
	printf("5. 종료\n");
	printf("-----------------\n");
	printf("메뉴선택\n");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void customer_write(char filename[])
{
	srand(time(NULL));
	FILE* fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러 \n");
		return -1;
	}
	for (int i = 0; i < 5; i++) {
		strcpy(inf_arr[i].name, name[rand() % 5]);
		strcpy(inf_arr[i].tel, tel[rand() % 5]);
		strcpy(inf_arr[i].addr, addr[rand() % 5]);
		strcpy(inf_arr[i].car.model, model[rand() % 5]);
		strcpy(inf_arr[i].car.price, price[rand() % 5]);
		inf_arr[i].car.year = year[rand() % 5];

		fwrite(&inf_arr[i], sizeof(cust), 1, fp);
	}
	fclose(fp);
	printf("랜덤한 데이터가 파일에 저장되었습니다.\n");
}

void customer_read(char filename[])
{
	srand(time(NULL));
	FILE* fp = fopen("filename", "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 에러 \n");
		return -1;
	}
	cust temp = { 0 };
	while (fread(&temp, sizeof(cust), 1, fp) == 1) {
		printf("이름 : %s 전화 번호: %s 주소 : %s 차량모델 : %s 가격: %s 연식 : %d\n", temp.name, temp.tel, temp.addr,
			temp.car.model, temp.car.price, temp.car.year);
		printf("============================================================\n");

	}
	fclose(fp);
}

void customer_write1(char filename[]) {
	FILE* fp;
	cust cus1 = { 0 };
	printf("이름 :");
	scanf("%s", cus1.name);
	printf("전화번호 :");
	scanf(" %s", cus1.tel); // %s뒤에 %c라서 엔터값이 입력되면 %c에 입력되어 버리기에 넘어가는 것을 방지하기 위해 공간 띄움.
	getchar();
	printf("주소:");
	gets(cus1.addr); //공백을 입력받기 위해 사용
	printf("차량모델 : ");
	scanf("%s", cus1.car.model);
	printf("가격 : ");
	scanf("%s", cus1.car.price);
	printf("연식 : ");
	scanf("%d", &cus1.car.year);

	fp = fopen("filename", "ab");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러 \n");
		return-1;
	}
	fwrite((void*)&cus1, sizeof(cus1), 1, fp); //(void*)생략가능.
	fclose(fp);

}

void del_all_cust(char filename[]) {
	FILE* fp = fopen("filename", "wt");
	fclose(fp);
	printf("전체 데이터를 삭제했습니다.");
}