/**
 * 문자열 비교 함수 
 */ 

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char inputOne[5] = "B";
    char inputTwo[5] = "A";
    printf("문자열비교 : %d\n", strcmp(inputOne, inputTwo)); // strcmp - 사전 구현하기, 영단어 암기장 구현하기 할때 유용하게 쓰이는 함수이다 
    return 0;
}

/**
 * 두 문자가 사전적으로 동일하면 0 이 나오고, 왼쪽이 사전적으로 앞에있으면 -1 이 나오고 오른쪽이 사전적으로 앞에있으면 1 이 나온다 
 */ 