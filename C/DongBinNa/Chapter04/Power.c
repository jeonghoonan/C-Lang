#include <stdio.h>
#include <math.h> // math라는 라이버리 를 power(), absolute()...   

int main(void) {

    double x = pow(2.0, 20.0); // 2의 20제곱 
    printf("2의 20제곱은 %.2f입니다.\n", x); // 1048576.00(.2f해서 소숫점 두자리까지 표현)
    return 0;
}