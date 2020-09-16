/**
 * 학생 점수의 총합 구하기 
 */ 

#include <stdio.h>

int main(void)
{
    int score[5][2]; // 행 : 5 = 학생의 숫자  / 열 : 2 = 수학/영어 점수 (총 10개의 데이터가 들어갈수 있는 공간)
    int total[2] = { 0, }; // 1차원 배열을 할당할때 모든 데이터의 값을 0을 넣어준다는 뜻. 
                        // 두개만큼의 공간을 할당해서 index[0], index[1] 에 들어가는 값은 0 이다 
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d번 학생의 수학, 영어 점수 : ", i + 1);
        scanf("%d %d", &score[i][0], &score[i][1]);
    }

    for (i = 0; i < 5; i++) {
        total[0] += score[i][0];
        total[1] += score[i][1];
    }

    printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
    printf("5명의 영어 점수 합계 : %d\n", total[1]);
    return 0; 
}