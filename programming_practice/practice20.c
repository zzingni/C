// 2개의 double 형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y;        // 변수 선언 double

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);       // 두 개의 실수 읽어오기

    printf("%.2f %.2f %.2f %.2f", x+y, x-y, x*y, x/y);      // 출력, 소수점 표시해주기!

    return 0;

}
