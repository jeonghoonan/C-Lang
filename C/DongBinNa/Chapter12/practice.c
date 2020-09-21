#include <stdio.h>
// #include <stdlib.h>

struct practice
{
    int number;
    char name[10];
    double grade;
};


int main(void) {
    struct practice s;
    s.number = 202020;
    strcpy(s.name, "홍길동");
    s.grade = 3.2;
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.2f\n", s.grade);
    return 0;
}