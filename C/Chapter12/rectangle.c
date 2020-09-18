/**
 * 사각형의 넓이와 둘레를 구하는 프로그램 
 */ 

#include <stdio.h>
#include <math.h>

struct point { // 좌표 평면상에서 하나의 점을 의미한다 
// 두가지 속성을 가지고있어서 x 좌표 y 좌표 
    int x; 
    int y;
};

struct rect { // 사각형을 의미한다 
// 좌표평면상에서 사각형은 두개의 점으로 정의할수있다  
    struct point p1; // 가장 왼쪽에 있는 점 
    struct point p2; // 가장 오른쪽에 있는 점 
};

int main(void) {
    struct rect r;
    int w, h, area, peri; // area - 넓이 peri (perimeter) - 둘레 

    printf("왼쪽 상단의 좌표를 입력하세요 : ");
    scanf("%d %d", &r.p1.x, &r.p1.y); // x좌표, y좌표를 받는다 - 즉 왼쪽 위 점의 좌표를 입력 받는다 

    printf("오른쪽 하단의 좌표를 입력하세요 : "); 
    scanf("%d %d", &r.p2.x, &r.p2.y); 

    w = abs(r.p2.x - r.p1.x); // 넓이를 구한다 
    h = abs(r.p2.y - r.p1.y);

    area = w * h;
    peri = 2 * w + 2 * h;

    printf("사각형의 넓이는 %d이고, 둘레는 %d 입니다.", area, peri);
    return 0;
}