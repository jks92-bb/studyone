#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ������ �޴��� ��ȣ ���� �Լ�
void phone(char number[]);

int main() {
    srand(time(NULL)); // �õ� ����

    char number[12]; // 11�ڸ��� �޴��� ��ȣ�� ���ڿ� ���� ���� ����

   phone(number);

    printf("������ �޴��� ��ȣ: %s\n", number);

    return 0;
}

void phone(char number[]) {
    // �޴��� ��ȣ�� ù ��° ���ڴ� �׻� 0
    number[0] = '0';

    // 2~3��° ���ڴ� �����ϰ� 1~4 ������ ��
    number[1] = '1';
    number[2] = '0';

    // ������ 8�ڸ��� ������ ���� ����
    for (int i = 3; i < 11; i++) {
        number[i] = '0' + rand() % 10;
    }

    // ���ڿ� ���� ��Ÿ���� �� ���� �߰�
   number[11] = '\0';
}
