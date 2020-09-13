/**
 * +=, -=, *=, /=, %= 사용법 숙지  
 */ 

#include <stdio.h>

int main(void) {

    int x = 100;
    printf("현재 x 의 값은 %d 입니다.\n", x); // 100 
    x += 50; // x = x + 50; 
    printf("현재 x 의 값은 %d 입니다.\n", x); // 150
    x -= 50; // x = x - 50;
    printf("현재 x 의 값은 %d 입니다.\n", x); // 100
    x *= 50; // x = x * 50;
    printf("현재 x 의 값은 %d 입니다.\n", x); // 5000
    x /= 50;
    printf("현재 x 의 값은 %d 입니다.\n", x); // 100
    x %= 3;
    printf("현재 x의 값은 %d 입니다.\n", x); // 1 // 100/3 하면 나머지는 1 
    return 0;
}