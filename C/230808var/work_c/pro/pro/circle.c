#include <stdio.h>

int main() {
    double pi = 3.1459;
    printf("원주율: %f\n", pi);

    double radius = 5.0;
    double area = pi * radius * radius; // 원의 넓이 계산
    printf("반지름이 %f인 원의 넓이: %f\n", radius, area);

    return 0;
}
