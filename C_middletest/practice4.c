// 평균 계산하기 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float x, y, z;

    printf("3개의 실수를 입력하시오: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("합계=%.2f \n", x+y+z);
    printf("평균=%.2f", (x+y+z) / 3);

    return 0;

}
