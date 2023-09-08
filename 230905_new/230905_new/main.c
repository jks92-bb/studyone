// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api 사용 (윈도우 환경에서만 사용 가능)
#include <conio.h>
#include "menu.h"
#include "ui.h"
#include "file.h"
#include "rdata.h"
// #define NOCURSOR			0
// #define SOLID_CURSOR		1
// #define NORMAL_CURSOR	2

int main()
{
	char file[] = "address.bin"; //  배열형태의 변수인 file이름은 "address.bin" 작성.
	srand(time(NULL));	// 랜덤 함수 사용을 위한 시드 설정.
	font_color(LIGHT_GREEN); // 폰트 칼라 설정.
	set_cursor_type(NOCURSOR); // 커서 스타일 설정.
	title();
	_getch();

	system("cls");
	font_color(LIGHT_GREEN);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		int m = main_menu();
		switch (m) {
		case MAIN_RAND_INS: {
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // 배열 크기
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);
			printf("랜덤 데이터를 생성중입니다.....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;

		}
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };
			printf("ID : ");
			scanf("%d", &ad.id);

			printf("이름 : ");
			scanf(" %s  ", ad.name);

			printf("전화 : ");
			scanf(" %s  ", ad.tel);

			printf("주소 : ");
			getchar(  );
			gets(ad.addr);

			printf("email : ");
			scanf("%s", ad.email);
			file_write_direct(ad, file); // file->주소에 의한 전달 ad-> 값에 의한 전달
			printf("데이터를 입력중입니다.....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:
		{
			file_dele_all(file);
			printf("데이터를 삭제하는 중입니다....\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break; }
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH://검색-이름
		{
			while (1) {
				//안쓰는 정보 "" char. 안쓰는 정보 -1, 0 int.
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("이름검색 :");
					scanf("%s", name);
					file_search(file, name, EMAIL_EMPTY, ID_EMPTY);
					system("pause");
					
				}
				else if (submenu == 2) {
					int id = 0;
					printf("id검색 :");
					scanf("%d", &id);
					file_search(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");
					
				}
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("e-mail검색 :");
					scanf("%s", email);
					file_search(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");
					
				}
				else if (submenu == 4) {
					break;
				}
			}
			break;
		}
		case MAIN_DELETE://삭제

		{
			printf("삭제할 이름 입력:");
			char name[20];
			scanf("%s", name);
			printf("%s 삭제 중입니다.\n", name);
			file_delete3(file, name);
			Sleep(1000);
			system("pause");
			break;
		}

		case MAIN_UPDATE://수정
		{
			printf("검색할 이름 입력: ");
			char sname[20];
			scanf("%s", sname);
			printf("수정할 이름 입력: ");
			char dname[20];
			scanf("%s", dname);
			printf("%s을(를) %s(으)로 수정 중입니다.\n", sname, dname);
			file_update(file, sname, dname);
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_EXIT:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");


		}
		system("cls");
	}
}

