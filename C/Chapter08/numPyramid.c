/**
 * 반복 함수를 이용하여 숫자 피라미드를 출력할수있다 
 */ 

#include <stdio.h>

// 반복함수 같은 경우는 오직 FOR 문과 WHILE 문으로 구성이 된다 

int print(int a) {

    int i;
    int j;

    for (i = 0; i < a; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}

int main(void) {

    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}