#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *fp; // 포인터 변수 fp 를 만들어준다 
    char fname[256]; // 총 256 길이만큼 문자열이 들어갈수 있는 char 배열을 만들어준다 
    char buffer[256];
    char word[256];
    int line = 0;

    printf("파일 이름을 입력하세요 : ");
    scanf("%s", fname); // fname 안에 특정한 파일 이름을 입력 받아서 저장 할수있게 한다 

    printf("탐색할 단어를 입력하세요 : "); 
    scanf("%s", word); // word 라는 캐릭터 배열에 탐색할 단어를 입력받는다 

    if ((fp = fopen(fname, "r")) == NULL) { // file open(fname, "r") - 읽기 모드로 해당 파일을 열수있게 한다 
        fprintf(stderr, "파일 %s 를 열수 없습니다.\n", fname); // fprintf -> 파일 관련된 에러 출력할때 사용한다. 에러를 뛰어줄수있게 한다 (stderr  = standard error) 
        return 0;
    } // 이는 표준적인 c언어 소스 작성 방법이다 

    while (fgets(buffer, 256, fp)) {  //256의 길이만큼 파일에서 읽어서 buffer에 담을수 있도록 한다 
        line++; // 한주을 읽었기 때문에 
        if (strstr(buffer, word)) { // word 가 buffer 에 담겨있는지 
            printf("라인 %d : 단어 %s이(가) 발견되었습니다.\n", line, word);
        }
    }

    fclose(fp);
    return 0;
}

/**
 *      - 프로그램 구동 - 
 * 1. 먼저 파일 이름을 입력 받는다 
 * 2. 탐색할 단어 입력 받는다 
 * 3. 해당 파일을 열어서 만약 파일을 못열었다면 에러메세지를 출력한다
 * 4. 파일이 열리면, 파일이 끝날때까지 해당 파일을 모드 읽을때까지(256제만큼) 한줄만큼 버퍼에 계속 파일을 읽어나가면서 buffer에 저장을 한다 
 * 5. 라인을 한씩 증가한다  
 * 6. 탐색하는 단어가 buffer 에 담겨있다면 포함 되어있다면 해당 라인에서 단어가 발견되었다는 메세지를 출력해준다   
 */ 