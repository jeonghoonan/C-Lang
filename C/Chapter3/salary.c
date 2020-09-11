#include <stdio.h>
#define MONTHS 12

int main(void) {

    double monthSalary = 1000.5;
    printf("$ %.2f", monthSalary * MONTHS); // 12를 넣어도 가능하나, 상수를 사용한거다

    return 0;
}