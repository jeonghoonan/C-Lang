/**
 * 특정한 문자열을 재귀 함수 반복 출력하기 
 */ 

// 재귀함수(Recursive Function) - 재귀(어떤것을 반복으로 수행하되 자기 자신을 포함하는 형태)
// 자기 함수안에 자기가 또 들어가 있는 형태 

#include <stdio.h>

void print(int count) {
    if (count == 0) {
        return;
    } else {
        printf("문자열을 출력합니다.\n");
        print(count - 1); // print라는 함수 안에서print또 실행. 이런게 재귀함수라고 한다 
    }
}

int main(void) {
    int number;
    printf("문자열을 몇개 출력할까요? ");
    scanf("%d", &number);
    print(number);
    return 0;
}