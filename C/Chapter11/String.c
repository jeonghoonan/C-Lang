/**
 * 하나의 문자열 안의 글자수 세기 
 */ 

#include <stdio.h>

int main(void)
{
    char input[1001]; // 총 1001개만큼의 문자가 들어갈수 있는 하나의 문자열을 만든다 
    gets(input); // input이라는 char 배열 안에 그 다음으로 사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는것을 의미한다 
    int count = 0;
    // HELLO 를 넣는다고 하면, index[0] = H , index[1] = E 이런식  5번째값이 NULL 이 된다 
    while(input[count] != '\0') // '\0' 이라는 의미는 NULL을 의미한다. 
                            // 문자열은 입력이 된 다음에 남은 모든 공간은 자동으로 NULL 값이 들어간다 
                            // count를 1씩 계속 증가하면서 NULL 을 만날때까지 count를 증가시킨다 
    {
        count++;
    }
    printf("입력한 문자열의 길이는 %d 입니다.", count);
    printf(" 입력한 문자열 : %s", input);
    return 0;
}