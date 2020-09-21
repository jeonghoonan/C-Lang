/**
 * 두 변수의 갑을 서로 변환하는 프로그램을 작성할수 있다 
 */ 

#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수 
void swap(int *x, int *y) // 포인터는 선언할때 * 을 붙여서 선언한다 
                            // int 형의 어떤 값을 가르키는 pointer x를 만들었다
{
    int temp; 
    temp = *x; // *(포인터)x 가 가르키는 위치의 값을 넣어준다 
    *x = *y; // x 가 가르키는 주소의 값을 y가 가르키는 주소의 값으로 바꾼다 
    *y = temp; 
}

int main(void) 
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}