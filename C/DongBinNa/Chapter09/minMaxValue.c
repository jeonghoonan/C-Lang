/**
 * 5 개의 정수 중에서 최댓값과 최솟값의 위치를 출력하는 프로그램 
 */

#include <stdio.h>
#include <limits.h> // int 형 가장 큰건(INT_MAX) limits.header 파일에서 보관하고 있다. 
#define NUMBER 5 // 배열의 크기를 지정해줄때 

int main(void) {
    int i, max, min, index; // i 는 임시적으로 사용하는 배열각각의 위치를 의미하는 변수 //  max 는 최댓값 // index 는 그 위치 
    int array[NUMBER]; // 배열을 만들어주는 방법
    max = 0; 
    index = 0;
    // array[0] ~ array[4] : 총 5개가 들어갈수있는 크기의 배열 선언 
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]);
        if (max < array[i]) { // 현재의 max/최대값보다 지금 검사하는 i 번째 index 의 값이 더 크면,
            max = array[i]; // max에 해당값을 넣어준다 
            index = i; // index 에 해당위치를 저장한다 
        }
    }
    printf("가장 큰 값은 %d 입니다. 그리고 %d번째에 있습니다. \n", max, index + 1);
    min = INT_MAX; // int 자료형에서 가장 큰 수는 int_max 이다 
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]);
        if (min > array[i]) {
            min = array[i];
            index = i;
        }
    }
    printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);
    return 0;
}
