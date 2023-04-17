// 사용자로부터 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;      // 변수선언

    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &x);     // 정수를 16진수로 입력받기

    printf("8진수로는 %#o입니다 \n", x); 
    printf("10진수로는 %d입니다 \n", x);
    printf("16진수로는 %#x입니다",x);   // 출력 8진수 10진수 16진수 형태

    return 0;
}
