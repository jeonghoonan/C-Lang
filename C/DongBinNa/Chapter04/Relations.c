/**
 * 관계연산자
 * C언어 에서는 true값을 1, false 값을 0 으로 반환한다 
 */ 

#include <stdio.h>

int main(void) {

    int x = 50, y = 30;
    printf("x 가 y 와 같은가 ? %d\n", x != y); // 1
    printf("x 가 y 와 다른가 ? %d\n", x == y); // 0
    printf("x 가 y 보다 큰가 ? %d\n", x > y); // 1
    printf("x 가 y 보다 큰가 ? %d\n", x < y); // 0
    printf("x 에 y 값을 넣으면 ? %d\n", x = y); //30 // x 라는 변수에 y의 값을 넣는다 
    if (x == y) {
        // 참일경우 실행되는 부분 
    } else {
        // 거짓일경우 실행되는 부분 
    }


    // x 가 y 와 같은 값을 가지고 있는가?
    // x = y -> x 와 y 가 같은 삼항 그 자체를 의미한다 
    // x == y -> true, x 와  가 같은 값을 가지고 있다 
    return 0;
}