#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    // 1���� �迭 dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���.
    // * B * B * 
    // 1 1 2 1 1
    // * : ���ڰ� ���� ��, B: ����.
    char dmz[] = { '*', 'B', '*', 'B', '*' };
    int arr[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        if (dmz[i] == '*') {
            printf("* ");
        }
        else if (dmz[i] == 'B') {
            printf("B ");
        }
        else {
            int count = 0;
            if (i > 0 && dmz[i - 1] == 'B') {
                count++;
            }
            if (i < 4 && dmz[i + 1] == 'B') {
                count++;
            }
            printf("%d ", count);
        }
    }

    return 0;
}
