// 키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램을 작성. 단, switch를 사용한다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char text;          // 변수 선언

    printf("문자를 입력하시오: ");
    text = getchar();               // 키보드에서 하나의 문자 읽기 (문자를 읽을 때는 getchar 함수 사용)

    switch(text)                    // switch 조건문 작성
    {
        case 'a': printf("모음입니다. \n"); break;
        case 'e': printf("모음입니다. \n"); break;
        case 'i': printf("모음입니다. \n"); break;
        case 'o': printf("모음입니다. \n"); break;
        case 'u': printf("모음입니다. \n"); break;
        default: printf("자음입니다. \n"); break;
    }

    return 0;

    
}
