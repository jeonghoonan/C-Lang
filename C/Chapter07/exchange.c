/**
 * 화폐의 개수를 가장 적게 주는 방법 프로그램 
 */ 

// 특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수입닏
// 50000 부터 한 이유가, 가장 적은 거스름돈이라서 가장 위에서 하고, 한국은 5만원권이 가장 크기 때문 
int smallest(int number) {
    int count = 0;
    while (number >= 50000) {
        number -= 50000;
        count++;
    }
    while (number >= 10000) {
        number -= 10000;
        count++;
    }
    while (number >= 5000) {
        number -= 5000;
        count++;
    }
    while (number >= 1000) {
        number -= 1000;
        count++;
    }
    while (number >= 500) {
        number -= 500;
        count++;
    }
    while (number >= 100) {
        number -= 100;
        count++;
    }
    while (number >= 50) {
        number -= 50;
        count++;
    }
    while (number >= 10) {
        number -= 10;
        count++;
    }
    return count;
}

#include <stdio.h>

int main(void) {

    int number;
    printf("금액을 입력하세요 : ");
    scanf("%d", &number);
    printf("최소로 줄수있는 화폐의 개수는 %d개 입니다.\n", smallest(number));
    
    return 0;
}