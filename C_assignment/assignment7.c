// system()함수 사용

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>                                     // system() 함수를 포함하는 헤더 파일

int main(void) {
    system("dir");                                      // 현재 디렉토리의 파일 및 폴더 목록을 출력하는 명령어
    printf("아무 키나 치세요 \n");
    _getch();
    system("cls");                                      // 현재의 터미널 또는 명령 프롬프트 창의 내용을 지움

    return 0;
}
