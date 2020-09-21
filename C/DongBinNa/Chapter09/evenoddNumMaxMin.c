/**
 * 5개의 정수 중에서 짝수 최댓값과 홀수 최댓값을 구하는 프로그램 
 */ 

#include <stdio.h>
#define NUMBER 5

int main(void) {

    int array[NUMBER]; // 배열 할당 
    int i, oddMax, evenMax;
    oddMax = 0;
    evenMax = 0;
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]); // array의 특정 인덱스[i] 부터 모든 배열의 인덱스 값을 받는다 
        if (array[i] % 2 == 0) { // 짝수라면 
            if (evenMax < array[i]) { // 비교 
                evenMax = array[i]; 
            }
        }
        else {
            if (oddMax < array[i]) { // 최댓값을 구하는 거기 때문에  
                oddMax = array[i];
            }
        }
    }
    printf("%d %d", oddMax, evenMax);
    return 0;
}