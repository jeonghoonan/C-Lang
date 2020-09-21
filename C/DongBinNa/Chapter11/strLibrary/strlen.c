/**
 * 하나의 문자열 안의 글자수 세기 
 */ 

#include <stdio.h> 
#include <string.h> // 문자열 관련한 각종 함수를 제공하는 라이브러리 

int main(void)
{
    char input[5] = "Love";
    printf("문자열의 길이 : %d\n", strlen(input)); // strlen 은 함수를 제공한다 
    return 0;
}