#include <stdio.h>

int main(void) {
    // // 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
    // int age = 25;
    // // if (조건) { ... } else { ... }
    // if (age >= 25) {
    //     printf("regular");
    // } else {
    //     printf("student");
    // }

    // elementary(8-13) / middle(14-16) / high(17-19) 
    // if /else if / else 
    int age = 16;
    if (age >= 8 && age <= 13) {
        printf("elementary student");
    } else if(age >= 14 && age <= 16) {
        printf("middleschool student");
    } else if (age >= 17 && age <= 19) {
        printf("highschool student");
    } else {
        printf("adult");
    }
    return 0;
}   