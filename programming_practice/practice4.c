// 다항식 작성 계산 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float x, result;    // 변수선언 x, result

    printf("실수를 입력하시오: ");
    scanf("%f", &x);    // x 입력받기

    result = (3.0 * x * x) + (7.0 * x) + 11;    // 식 선언 : (3 * x * x) + (7 * x) + 11

    printf("다항식의 값은 %.2f", result);       // 값 출력

    return 0;

}
