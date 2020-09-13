/**
 * 논리연산자
 *  and(&&) or(||) not(!=) 
 */

#include <stdio.h>

int main(void) {
    int x = 50; 
    int y = 30;
    printf("x 가 y 보다 크고 y 는 40미만입니까 ? %d\n", (x > y) && (y < 40));
    printf("x 가 y 보다 작거나 혹은 y 가 30입니까? %d\n", (x < y) || (y == 30));
    printf("x 가 50이 아닙니까? %d\n", x != 50);
    return 0;
}