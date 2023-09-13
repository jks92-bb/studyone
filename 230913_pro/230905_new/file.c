#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	
#include "file.h"

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}
	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write_direct(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_dele_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		exit(0);
	}
	fclose(fp);
}

void file_read(char filename[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	/*while (fread(&ad, sizeof(ADDR), 1, fp) == 0) {
		printf("데이터가 존재하지 않습니다.\n");
		printf("데이터를 입력해주세요.\n");
		break;
	}*/
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		/*if (ad.id > 0) {*/
		printf("번호 : %d\n", count++);
		printf("ID : %d\n", ad.id);
		printf("이름 : %s\n", ad.name);
		printf("전화 : %s\n", ad.tel);
		printf("주소 : %s\n", ad.addr);
		printf("email :%s\n", ad.email);
		printf("==========================\n");
		check = 1;
		/*}*/

	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}

}

void file_search(char filename[], char name[], char email[], int id)
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int check = 0;
	int count = 1;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0 || strcmp(ad.email, email) == 0 || ad.id == id) {
			printf("번호 : %d\n", count++);
			printf("ID : %d\n", ad.id);
			printf("이름 : %s\n", ad.name);
			printf("전화 : %s\n", ad.tel);
			printf("주소 : %s\n", ad.addr);
			printf("email :%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}

	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_search_id(char filename[], int id[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int check = 0;
	int count = 1;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {

		if (ad.id == id) {
			printf("번호 : %d\n", count++);
			printf("ID : %d\n", ad.id);
			printf("이름 : %s\n", ad.name);
			printf("전화 : %s\n", ad.tel);
			printf("주소 : %s\n", ad.addr);
			printf("email :%s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_delete(char filename[], char delName[])
{
	//데이터 찾아서 삭제하는 함수 
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int check = 0;
	int count = 1;
	int i = 0;
	// 데이터가 1개 남았으면 삭제가 되지 앟는 버그 존재.
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수 : %d\n", i);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	for (int i = 0; i < 200; i++) {
		/*printf("del_arr[%d] : %d \n", del_arr[i].id);*/ //디버깅 용도로 만든 코드.
		if (strcmp(del_arr[i].name, "") != 0) {
			if (del_arr[i].name != 0) {
				fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
			}
		}
		fclose(fp2);
	}
}
//static 이상한 오류 뜨면 static 쓰기. 배열 오류 나타날 시.

void file_delete2(char filename[], char delName[]) //디버깅 코드
{
	//데이터 찾아서 삭제하는 함수 
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int check = 0;
	int count = 1;
	int i = 0;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수: %d \n", i);
	int size = i;
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 읽기 오류\n");
		exit(0);
	}
	for (int i = 0; i < size; i++) {
		printf("del_arr[%d]:%d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
//static 이상한 오류 뜨면 static 쓰기. 배열 오류 나타날 시.

void file_delete3(char filename[], char delName[])
{	//버그 없는 코드.
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 오픈 오류 \n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int check = 0;
	int count = 1;
	int i = 0;

	while (fread(&ad, sizeof(ad), 1, fp) == 1) {

		if (strcmp(ad.name, delName) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수 : %d\n", i);
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 읽기 오류\n");
		return;
	}
	for (int i = 0; i < 200; i++) {
		// 배열에 데이터가 없으면 반복문 탈출
		if (del_arr[i].id == 0) break;
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);

	}
	fclose(fp2);
}

void file_update(char filename[], char sName[], char dName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 오픈 오류\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ADDR), 1, fp) == 1) {

		if (strcmp(ad.name, sName) == 0)
		{
			strcpy(del_arr[i].name, dName);
			check = 1;
		}
		else {
			strcpy(del_arr[i].name, ad.name);
		}
		del_arr[i].id = ad.id;
		strcpy(del_arr[i].addr, ad.addr);
		strcpy(del_arr[i].tel, ad.tel);
		strcpy(del_arr[i].email, ad.email);
		i++;
	}

	fclose(fp);

	printf("복사한 개수 : %d\n", i);
	int size = i;
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 읽기 오류\n");
		return;
	}
	for (int i = 0; i < size; i++) {
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
