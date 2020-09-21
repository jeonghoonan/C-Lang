#include <stdio.h>

int main(void) {

    /**
     * 윤년 -> 4년마다, 그렇지만 100년 단위일때는 윤년에 해당하지 않도록 한다 
     * 윤년 -> 400년 단위일때는 어떤 상황이든간에 윤년으로 설정한다
     */ 
    
    int year = 2016;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }
    return 0;
}