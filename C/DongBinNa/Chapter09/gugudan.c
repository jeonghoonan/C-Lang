/**
 * 구구단을 이용하여 이차원 배열을 출력하기 
 */ 

#include <stdio.h>

int main(void) {
    int i, j;
    int gugudan[10][10]; // 구구단이란 이름의 이차원 배열을 만든다 
    for (i = 1; i <= 9; i++) {
        printf("\n[ %d단 ]\n\n", i); // [ 1단 ] ~ [ 9단 ]
        for (j = 1; j <= 9; j++) { 
            gugudan[i][j] = i * j; // i 번째 행에 j 번째 열에 특정한 값을 넣는다 
            printf("%d X %d = %d\n", i, j, gugudan[i][j]);
        }
    }
    return 0;
}