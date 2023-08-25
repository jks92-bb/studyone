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
    struct student score[5] = { 0 }; // 구조체 배열 변수 선언
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        score[i].kor = rand() % 101; // 0부터 100까지의 무작위 국어 점수
        score[i].eng = rand() % 101; // 0부터 100까지의 무작위 영어 점수
        score[i].math = rand() % 101; // 0부터 100까지의 무작위 수학 점수

        score[i].sum = score[i].kor + score[i].eng + score[i].math; // 총점 계산
        score[i].avg = score[i].sum / 3; // 평균 계산

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

        printf("학생%d: 국어(%d), 영어(%d), 수학(%d), 총점(%d), 평균(%d), 학점(%c)\n",
            i + 1, score[i].kor, score[i].eng, score[i].math,
            score[i].sum, score[i].avg, score[i].hak);
    }

    return 0;
}
