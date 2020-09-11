#include <stdio.h>

int main(void) {

    int x = 100;
    printf("10진수로 출력 : %d\n", x); // 100 // 10진수 //기본적으로 출력한다 
    printf("8진수로 출력 : %o\n", x); // 144 // 8진수 // 1 2 3 4 5 6 7 10 11 12 ->
    printf("16진수로 출력 : %x\n", x); // 64 // 16진수 
    return 0;
}