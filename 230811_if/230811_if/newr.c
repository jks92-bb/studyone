#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("-----------------\n");
    printf("���� ���Ǳ� ���α׷�\n");
    printf("------------------\n");

    char ade;
    int money = 0;
    int result = 0;

    int a = 1500;
    int b = 1300;
    int c = 1500;
    int d = 1300;
    int e = 1400;

    printf("���Ḧ �����ϼ��� (A, B, C, D, E): ");
    scanf(" %c", &ade);

    switch (ade) {
    case 'a': case 'A':
        printf("�Ŀ����̵�\n");
        break;
    case 'b': case 'B':
        printf("��ī�ݶ�\n");
        break;
    case 'c': case 'C':
        printf("������η���\n");
        break;
    case 'd': case 'D':
        printf("���\n");
        break;
    case 'e': case 'E':
        printf("��ī�ݶ�����\n");
        break;
    default:
        printf("�߸��� ���� �����Դϴ�.\n");
        return 1; // ���α׷� ����
    }

    printf("������ �Է��ϼ���: ");
    scanf("%d", &money);

    switch (ade) {
    case 'a': case 'A':
        result = money - a;
        break;
    case 'b': case 'B':
        result = money - b;
        break;
    case 'c': case 'C':
        result = money - c;
        break;
    case 'd': case 'D':
        result = money - d;
        break;
    case 'e': case 'E':
        result = money - e;
        break;
    }

    if (result >= 0) {
        printf("�Ž������� %d���Դϴ�.\n", result);
    }
    else {
        printf("���� �����մϴ�.\n");
    }

    return 0;
}
