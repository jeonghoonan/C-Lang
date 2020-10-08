/*
int main () 함수 위에 
int name(); 을 넣어보세요.
함수 원형을 미리 선언하지 않아서 나온 에러일 수 있어요.
name 함수에서 정의한 매개변수도 똑같이 넣어야 하고요.
int name(int ) ;  자료형만 넣어도 되고요.

if (foundAllAnimals) -> 가 안됐던 이유에 대해서. 실행을 시키기 위해서는 선언을 해줘야 했다. 

돌아가기는 하지만, 어쩌다 보니 순서가 랜덤이다... 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기 
// 모든 동물 쌍을 찾으면 게임 종료 
// 총 실패 횟수 알려주기 

int arrayAnimal[4][5]; // 전체 카드 지도 (20장의 카드 를 표시)
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인 
char *strAnimal[10]; // string 배열로 동물 이름을 만든다 

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();

int main_m_array_projects(void) {
    srand(time(NULL));

    initAnimalArray();
    initAnimalName();

    shuffleAnimal(); // 만들 지도에다가 어떻게 배치를 할지를 정하는 것이다 

    int failCount = 0; // 실패 횟수 

    while (1) {
        int select1 = 0; // 사용자가 선택한 처음 수 
        int select2 = 0; // 사용자가 선택한 두번째 수 
    
        printAnimals(); // 동물 위치 출력 
        printQuestion(); // 문제 출력 (카드 지도)
        printf("뒤집을 카드를 2개 고르세요 : ");
        scanf("%d %d", &select1, &select2);

        if (select1 == select2) { // 같으 카드 선택 시 무효 
            continue;
        }

        // 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인 

            // 정수 좌표를 (x, y) 로 변환 
            int firstSelect_x = conv_pos_x(select1);
            int firstSelect_y = conv_pos_y(select1);

            int secondSelect_x = conv_pos_y(select2);
            int secondSelect_y = conv_pos_y(select2);

            // 같은 동물인 경우 
            if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0) 
                && (arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])) {
                    printf("\n\n빙고! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
                    checkAnimal[firstSelect_x][firstSelect_y] = 1;
                    checkAnimal[secondSelect_x][secondSelect_y] = 1;
            }
            // 다른 동물인 경우  
            else {
                printf("\n\n 땡!! \n");
                printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
                printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
                printf("\n\n");

                failCount++;
            }  

            // 모든 동물을 찾았는지 여부, 1: 참, 0 : 거짓
            int foundAllAnimals();
            if (foundAllAnimals() == 1) {
                printf("\n\n 축하합니다 모든 동물을 다 찾았네요 \n");
                printf("지금까지 총 %d 번 실수하였습니다\n", failCount);
                break;
            }
    }

    return 0;
}

void initAnimalArray() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName() {
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";

    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

void shuffleAnimal() {
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

// 좌표에서 빈 공간 찾기 
int getEmptyPosition() {
                                // 5 칸씩 4개가 있는거다. 5로 나누면 된다 
    // ㅁㅁㅁㅁㅁ 0   1  2  3  4  -> 0 0 0 0 0
    // ㅁㅁㅁㅁㅁ 5   6  7  8  9  -> 1 1 1 1 1
    // ㅁㅁㅁㅁㅁ 10 11 12 13 14  -> 2 2 2 2 2 
    // ㅁㅁㅁㅁㅁ 15 16 17 18 19  -> 3 3 3 3 3
    while (1) {
        int randPos = rand() % 20; // 0-19 사이의 숫자 반환 
        // 19 라는 좌표에 접근을 할려면  -> (3, 4) // 첫번째줄 (0,5,10,15) 밑으로 해서 3, (15,16,17,18,19) 해서 4 
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1) {
            return randPos; // 지금 위치를 반환해죠 
        }
    }
    return 0;
}

int conv_pos_x(int x) {
    // 19 -> (3, 4)
    return x / 5; // 총 5칸이 있어서 5를 나눠주는것이다 
}

int conv_pos_y(int y) {
    // 19 -> 19 / 5 ? 몫은 3, 나머지는 4
    return y % 5; // y 를 5로 나눈 나머지 값 
}

void printAnimals() {
    // ㅁㅁㅁㅁㅁ 1   1  2  2  3  
    // ㅁㅁㅁㅁㅁ 3   4  4  5  5  
    // ㅁㅁㅁㅁㅁ   
    // ㅁㅁㅁㅁㅁ   
    printf("\n===============\n\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%8s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n===============\n\n");
}

void printQuestion() {
    printf("\n\n(문제)\n");
    int seq = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            // 카드를 뒤집에서 정답을 맞혔으면 '동물이름'
            if (checkAnimal[i][j] != 0) {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            } 
            // 아직 뒤집지 못했으면 (정답을 못맞쳤으면) 뒷면 -> 위치르 나타내는 숫자 
            else {
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] == 0) {
                return 0;
            }
        }
    }
    return 1; // 모두 다 찾음 
}