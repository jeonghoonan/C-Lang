/**
 * 사칙연산 구현하기 
*/

# include <stdio.h>

int main(void) {

    int x = 10;
    int y = 20;

    printf("x = %d 입니다.\n", x);
    printf("y = %d 입니다.\n", y);

    printf("x + y = %d입니다.\n", x + y);
    printf("x - y = %d입니다.\n", x - y);
    printf("x * y = %d입니다.\n", x * y);
    printf("x / y = %d입니다.\n", x / y); // 몫만 봤을땐 0이고 나머지는 10이다 
    return 0;
}