// int형의 변수 x, y 값을 서로 교환하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, z = 0;      // 변수 선언 및 초기화
    printf("x=%d y=%d \n", x, y);      // 초기화된 값 출력

    z = x;
    x = y;
    y = z;      // 식 작성 x, y값 교환

    printf("x=%d y=%d", x, y);      // 출력

    return 0;

}
