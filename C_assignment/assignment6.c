// 삼각 함수 라이브러리 사용

#include <stdio.h>
#include <math.h>                                       // 수학 라이브러리 함수, 일반적으로 double형의 매개 변수와 반환값 가짐.

int main(void)
{
    double pi = 3.1415926535;                           // double형의 pi값 변수 선언 및 초기화
    double x, y;                                        // double형의 x와 y 변수 선언

    x = pi / 2;                                         // pi값을 2로 나눈 몫을 x에 대입
    y = sin(x);                                         // sin()함수 호출, sin(x) 값을 y에 대입
    printf("sin( %f ) = %f \n", x, y);                  // sin( 1.570796 ) = 1.000000 출력됨
    y = cos(x);                                         // cos()함수 호출, cos(x) 값을 y에 대입
    printf("cos( %f ) = %f \n", x, y);                  // cos( 1.570796 ) = 0.000000 출력됨

    return 0;
}
