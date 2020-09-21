/**
 * strcpy 함수
 *  내부적으로 포인터를 다루고 있는 함수 
 *  문자관련 포인터를 다룸으로써 글자가 더 적다고 하더라도 문자를 복사한다
 */ 

#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = "I Love You";
    char result[5] = "Love";
    strcpy(result, input); // result 라는 문자열 안에 imput을 카피한다 
    printf("문자열 복사 : %s\n", result);
    return 0;
}