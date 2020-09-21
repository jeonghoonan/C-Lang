/**
 * 무슨 이유인지 인지는 모르지만 코드 이상하게 돌아감...
 */ 

#include <stdio.h>
#define SIZE 5 // 학생의 총 명수를 사이즈 라고 진행 

struct student {
    int number;
    char name[20]; // 한글이름으로 총 10글자 들어갈수있다. 한글은 한 글자당 2 바이트 이기때문에
    double grade;  
};

int main(void) {
    struct student list[SIZE]; // 학생 구조체를 list로 만든다. 변수명은 list이다 
    
    int i;
    for (i = 0; i < SIZE; i++) {
        // 한명의 학생학생마다 그 학번, 이름, 학점을 입력 받을수있게 한다 
        printf("학번을 입력하세요 : ");
        scanf("%d", &list[i].number); // 즉, 구조체의 첫번째 index 해당하는 학생의 학번을 입력받게 한다 
        printf("이름을 입력하세요 : ");
        scanf("%s", &list[i].name);
        printf("학점을 입력하세요 : ");
        scanf("%.1f", &list[i].grade); // double 형은 입력을 받을때 %_f로 값을 받는다 
    }

    for (i = 0; i < SIZE; i++) {
        printf("학번 : %d, 이름 : %s, 학점 %.1f\n", list[i].number, list[i].name, list[i].grade);
    }

    return 0;
}