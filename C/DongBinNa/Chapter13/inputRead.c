/**
 * 텍스트 파일 읽기 
 */ 

#include <stdio.h>

int main(void) {

    FILE *fp = NULL;
    int c;

    fp = fopen("input.txt", "r"); // input.txt 파일을 열여준다 (읽기모드로)

    if (fp == NULL) { // input 파일이 없으면 실패했다고 뜬다 
        printf("파일 열기에 실패했습니다.\n");
    } else {
        printf("파일 읽기에 성공했습니다.\n");
    }

    while ((c = fgetc(fp)) != EOF) { // 지금 열려있는 파일에서 문자 하나를 읽어서 C에 저장하다는 뜻이다 
                                    // EOF = End Of File 파일의 끝을 의미 
        putchar(c); // 콘솔창에 해당문자르 출력한다 
    }

    fclose(fp);
    return 0;
}