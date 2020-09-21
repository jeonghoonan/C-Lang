/**
 * 초를 입력 받아 몇분 몇초인지 계산하는 프로그램 
 */

#include <stdio.h>
#define SECOND_PER_MINUTE 60 // 상수로서 정의한다 // 1분당 60초 

int main(void) {

    int input = 1000; // 1000초를 입력 받는다 
    int minute = input / SECOND_PER_MINUTE;
    int second = input % SECOND_PER_MINUTE;
    printf("%d초 %d분 %d초 입니다.\n", input, minute, second);
    return 0;
}