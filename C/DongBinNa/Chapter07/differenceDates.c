/**
 * 1월 1일부터 현재날짜 차이를 구하기 
 */

#include <stdio.h>

int getDays(int month, int day) { // 반환값 함수이름(매개변수)
    int i, sum = 0;
    for (i = 1; i < month; i++) {
        if (i == 2) {// 이 프로그램에서는 윤년을 감안하지 않습니다.
            sum += 28;
        } else if (i % 2 == 0) { // i 가 2의 배수라면 
            sum += 30;
        } else { // 홀수월 
            sum += 31;  
        }
    }
    return sum + day; // sum은 특정한 달까지의 날짜갯수를 구하는거고  day 는 몇날몇일이기때문에 그 일자를 그 일자 그대로 더해준다
}

int main(void) {
    int month, day;
    scanf("%d %d", &month, &day);
    printf("1월 1일부터 해당 날짜까지의 거리는 %d일 입니다.", getDays(month, day));
    return 0;
}