#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    // 1���� �迭 dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���.
    // * B * B * 
    // 1 1 2 1 1
    // * : ���ڰ� ���� ��, B: ����.
    char dmz[] = { 'B', 'B', '*', '*', '*' };
    int arr[5] = { 0 };

    if (dmz[0] == '*') {
        printf("��������\n");
    }

    for (int i = 0; i < 5; i++) {
        if (dmz[i] == 'B') {
            arr[i]++; // ���� ��ġ�� ������ ���
            if (i > 0) {
                arr[i - 1]++; // ������ ���ڰ� �ִ� ���
            }
            if (i < 4) {
                arr[i + 1]++; // ������ ���ڰ� �ִ� ���
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
