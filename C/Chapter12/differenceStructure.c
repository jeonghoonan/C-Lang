#include <stdio.h>

struct point // 구조체의 포인트는 int x, int y  가 있다 
{
    int x;
    int y;
};

void comparePoint (struct point p1, struct point p2) { // 함수를 만들어줘서 따로 관리할수있다.
    if ((p1.x == p2.x) && (p1.y == p2.y)) {
       printf("p1 과 p2 가 같습니다");
   }
}

int main(void) {
    // 두개의 점을 메인함수에서 사용하자 
    struct point p1;
    struct point p2;

    p1.x = 30; // x 좌표  
    p1.y = 10; // y 좌표 

    p2.x = 30;
    p2.y = 10;
    
    /* 
    if (p1 == p2) {
        printf("p1 과 p2 가 같습니다.");
    }
    */

    // 이게 안되는 이유는 구조체는 아무리 같은 구조체 타입 이라도 두개의 변수 자체를 직접 비교는 못한다

    comparePoint(p1, p2); // 메인함수에서는 사용만 하면 된다 
   
    return 0;
}