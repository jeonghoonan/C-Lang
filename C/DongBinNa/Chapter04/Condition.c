/**
 * 조건연산자
 *  조건 ? 참 : 거짓 
 *  코드를 짧고 간결하게 만들어주고, 논리적으로 부합해서 사용을 한다
 *  숫자를 비교할때 이용한다
 */ 

#include <stdio.h>

int main(void) {

    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : -x; // absoluteX는 항상 절대값을 반환한다 
                //조건연산자 /참 /거짓
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x 의 절댓값은 %d입니다.\n", absoluteX); // 50
    printf("x 와 y 중에서 최댓값은 %d 입니다.\n", max); // 30
    printf("x 와 y 중에서 최솟값은 %d 입니다.\n", min); // -50            
    return 0;
}