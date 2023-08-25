#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    int kor;
    int eng;
    int math;
    int sum;
    int avg;
    char hak;
};

int main() {
    struct student score[5] = { 0 }; // ����ü �迭 ���� ����
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        score[i].kor = rand() % 101; // 0���� 100������ ������ ���� ����
        score[i].eng = rand() % 101; // 0���� 100������ ������ ���� ����
        score[i].math = rand() % 101; // 0���� 100������ ������ ���� ����

        score[i].sum = score[i].kor + score[i].eng + score[i].math; // ���� ���
        score[i].avg = score[i].sum / 3; // ��� ���

        if (score[i].avg >= 90) {
            score[i].hak = 'A';
        }
        else if (score[i].avg >= 80) {
            score[i].hak = 'B';
        }
        else if (score[i].avg >= 70) {
            score[i].hak = 'C';
        }
        else if (score[i].avg >= 60) {
            score[i].hak = 'D';
        }
        else {
            score[i].hak = 'F';
        }

        printf("�л�%d: ����(%d), ����(%d), ����(%d), ����(%d), ���(%d), ����(%c)\n",
            i + 1, score[i].kor, score[i].eng, score[i].math,
            score[i].sum, score[i].avg, score[i].hak);
    }

    return 0;
}
