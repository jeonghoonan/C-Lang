/**
 * 파일입출력 
 */ 

#include <stdio.h>

int main(void) {
    FILE *fp = NULL; // FILE 한다음에 포인터 변수 fp 를 만들고 안에는 NULL을 넣어준다 
    fp = fopen("output.txt", "w"); // 파일으 열어라 
    // w -> 쓰기 모드 (Write), r -> 읽기 모드 (Read)
    if (fp == NULL) {
        printf("파일 열기에 실패했습니다.\n");
    } else {
        printf("파일 열기에 성공했습니다.\n");
    }
    // 파일에 한글자 한글자씩 출력하는 방법 
    fputc('H', fp); // f put character 
    fputc('E', fp); 
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    fclose(fp); // 프로그램을 종료할때 반드시 해당 파일 포인터 변수를 닫아줘야 한다 
    return 0;
}

/**
 * 이렇게 프로그램을 구동하면, 해당 파일의 폴더에 가보면은 output이라는 메모장에 HELLO 라고 저장되어 있다. (쓰기가 가능하다)
 */ 