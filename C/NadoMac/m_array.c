#include <stdio.h>

int main_m_array(void) {

    // 다차원 배열 Multimensional Array
    // int i; // 메모리 공간에 하나 만큼의 크기를 차지 
    
    // int arr[5]; // 5개의 공간 차지  
    // // ㅁㅁㅁㅁㅁ
    // // [0][1][2][3][4]

    // int arr2[2][5]; // 5개의 공간을 가진 array 가 2개 있다는 말이다 
    // // ㅁㅁㅁㅁㅁ
    // // ㅁㅁㅁㅁㅁ

    // // [0,0][0,1][0,2][0,3][0,4] -> ex) arr2[0][0] 이렇게 써야 한다 
    // // [1,0][1,1][1,2][1,3][1,4] -> ex) arr2[1][4]

    // int arr3[4][2]; // 2개 자리가 4개있다 
    // // ㅁㅁ
    // // ㅁㅁ
    // // ㅁㅁ
    // // ㅁㅁ

    // // [0,0][0,1] -> ex) arr3[0][1]
    // // [1,0][1,1]
    // // [2,0][2,1]
    // // [3,0][3,1] -> ex) arr3[3][0]

    // int arr4[3][3][3]; // 3개 자리가 3개인 3개

    // // ㅁㅁㅁ
    // // ㅁㅁㅁ
    // // ㅁㅁㅁ
    
    // // ㅁㅁㅁ
    // // ㅁㅁㅁ
    // // ㅁㅁㅁ
    
    // // ㅁㅁㅁ
    // // ㅁㅁㅁ
    // // ㅁㅁㅁ

    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr2[2][5] = { 
    //     {1, 2, 3, 4, 5}, 
    //     {1, 2, 3, 4, 5} 
    // };
    int arr3[4][2] = { 
        {1,2}, 
        {1,2}, 
        {1,2}, 
        {1,2} 
    };

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("2차원배열 (%d, %d) 의 값 : %d\n", i, j, arr3[i][j]);
    //     }
    //     printf("\n");
    // }

    int arr4[3][3][3] = { 
        {
            {1,2,3}, 
            {1,2,3}, 
            {1,2,3}
        }, 
        { 
            {1,2,3}, 
            {1,2,3}, 
            {1,2,3} 
        }, 
        {
            {1,2,3}, 
            {1,2,3}, 
            {1,2,3}
        } 
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("3차원배열 (%d, %d, %d) 의 값 : %d\n", i, j, k, arr4[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}