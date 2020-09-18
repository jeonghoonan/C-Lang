#include <stdio.h>
#include <stdlib.h>

struct StudentStructureUse
{
    int number;
    char name[10];
    double grade;
};

int main(void) 
{
    struct StudentStructureUse p;

    printf("학번을 입력하세요 : ");
    scanf("%d", &p.number);
    printf("이름을 입력하세요 : ");
    scanf("%s", p.name, 10);
    printf("학점을 입력하세요 : ");
    scanf("%f", &p.grade);

    printf("학번 : %d\n", p.number);
    printf("이름 : %s\n", p.name);
    printf("학점 : %.1f\n", p.grade);

    return 0;
}
