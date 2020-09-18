/**
 * 두 점사이의 거리 구하기 
 */ 

#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int main(void) {

    struct point p1, p2;
    int xDiff, yDiff; // x 좌표의 차이점 . y 좌표의 차이점 

    double distance; // 우리가 구할 답 

    printf("1번 점의 좌표를 입력하세요 : ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("2번 점의 좌표를 입력하세요 : ");
    scanf("%d %d", &p2.x, &p2.y);

    xDiff = p1.x - p2.x;
    yDiff = p1.y - p2.y;

    distance = sqrt(xDiff * xDiff + yDiff * yDiff); // sqrt는 제곱근을 구하는 함수. math.h 에 들어가있다 
    printf("두점사이의 거리는 %f입니다.\n", distance);

    return 0;
}