/**
 * overflow 
*/

#include <stdio.h> // 하나의 라이브러리이다 // .printf 를 사용할수있게 한다 
#include <limits.h> // int max가 포함하고 있다  // 각각의 변수들 자료형의 따른 한계점 한계값을 그런 범위들을 포함하고 있는 라이브러리이다 

int main(void) {

    int x = INT_MAX; // int x 가 가질수 있는 최댓값 
    printf("int형의 최댓값 x는 %d 입니다.\n", x); // 214783647
    printf("x + 1은 %d입니다.\n", x + 1); // -2147483648 한바뀌를 건너뛰어서 최소값으로 돌아갔다. 이게 overflow이다 
    return 0;
}