/**
 * char 는 내부적으로 숫자로 이루어져 있다 
*/

#include <stdio.h>

int main(void) {

    int x = 65;
    printf("%c\n", x);

    char y = 'A'; // 65 이라고 해도 A가 출력된다. 아스키 코드라고 한다. 
    printf("%c\n", y);

    char z = 'B';
    printf("%c\n", z);
    printf("%d", z); // 66이 나온다 
    return 0;
}