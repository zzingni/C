// fabs() 함수 사용

#include <stdio.h>
#include <math.h>                                       // 수학 라이브러리 함수, 일반적으로 double형의 매개 변수와 반환값 가짐.

int main(void)
{
    printf("12.0의 절대값은 %f\n", fabs(12.0));
    printf("-12.0의 절대값은 %f\n", fabs(-12.0));       // fabs()함수는 실수를 받아서 절대값을 반환하는 함수. 12와 -12의 절대값 : 12

    return 0;
}
