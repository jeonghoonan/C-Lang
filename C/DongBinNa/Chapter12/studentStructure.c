/**
 * 학생 정보 구조체
 */ 

#include <stdio.h>
#include <stdlib.h> // includes functions involving memory allocation, process control, conversions and others

struct student {
    int number; // 학생 번호 
    char name[10]; // 학생 이름 
    double grade; // 학점 
};

int main(void) {
    struct student s; // 구조체 student 그 변수를 s를 만들었다. 하나의 자료형을 스스로 만들어낸것이다. 
    s.number = 20150001; // 20150001 의 값이 int number 로 들어간다 
    strcpy(s.name, "홍길동"); // 홍길동이라는 문자열이 s.name으로 들어갈수있게 한다. 왜냐하면 char 배열이기때문에 이렇게 안정적으로 문자를 삽입할수있다 
    s.grade = 4.5;
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);
    return 0;
}