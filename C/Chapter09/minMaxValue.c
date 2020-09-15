#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void) {
    int i, max, min, index; // i 는 임시적으로 사용하는 배열각각의 위치를 의미하는 변수 //  max 는 최댓값 // index 는 그 위치 
    int array[NUMBER]; // 크기가 5인 배열을 선언한다
    max = 0;
    index = 0;
    // array[0] ~ array[4] : 총 5개가 들어갈수있는 크기의 배열 선언 
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]);
        if (max < array[i]) {
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d 입니다. 그리고 %d번째에 있습니다. \n", max, index + 1);
    min = INT_MAX;
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
