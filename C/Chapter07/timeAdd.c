/**
 * 시간 더해주는 프로그램
 * 몇시 몇분의 시간이 있을때 거기서 특정 시간을 더해주는 함수를 작성한다 
 */

#include <stdio.h>

// 전역변수 - 메인 함수 바깥쪽에 선언된다. 프로그램 전체에서 공통으로/ 프로그램 어디서나 접근할수있는 변수 
int hour;
int minute;
int minuteAdd;

void counter() { // 사용자 정의 함수  // counter라는 함수를 사용한거 
    minute += minuteAdd;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
}

int main(void) {
    
    printf("시를 입력하세요 : ");
    scanf("%d", &hour);
    printf("분을 입력하세요 : ");
    scanf("%d", &minute);
    printf("더할 분을 입력하세요 : ");
    scanf("%d", &minuteAdd);
    counter();
    printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
    return 0;
}