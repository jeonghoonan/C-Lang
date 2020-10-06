#include <stdio.h>
#include <time.h>
#include <stdlib.h> // srand 함수를 이용하기 위해서느 <stdlib.h> 를 이용해야 한다 

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main_function_project(void) {
    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
    // 맞히면 통과, 틀리면 실패 

    srand(time(NULL)); // 랜덤 / 이걸 사용하기 위해서 #include <time.h> 를 한다 
    int count = 0; // 맞힌 횟수 
    for (int i = 1; i < 5; i++) {
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        //printf("%d X %d ?", num1, num2);
        showQuestion(i, num1, num2);

        int answer = 1;
        scanf("%d", &answer);
        if (answer == -1) {
            printf("close the program\n");
            exit(0);
        } else if (answer == num1 * num2) {
            // successful
            success();
            count++;
        } else {
            // fail
            fail();
        }
    }

    printf("\n\n you answered %d amoung 5 passwords\n", count);
    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1; // 0 이 나오면 너무 쉬워서 1을 더한다 
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n######## %d 번째 비밀번호 ######\n", level);
    printf("\n\t%d x %d 는 ?\n\n", num1, num2);
    printf("\n비밀번호를 입력하세요 (종료 : -1)>> ");
}

void success() {
    printf("\n >> Good! answer \n");
}

void fail() {
    printf("\n >> Bad! fail \n");
}