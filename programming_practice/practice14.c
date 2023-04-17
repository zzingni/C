// 아스키 코드값 입력하면 해당하는 문자 출력 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;      // 변수 선언

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &a);     // 사용자로부터 코드값 입력받기, 문자형으로 받으면 값이 달라짐 -> 정수형으로 형식지정자 선언

    printf("문자:%c입니다.", a);     // 출력하기 (char 형식지정자 사용)

    return 0;

}
