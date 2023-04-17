// 수식의 값 화면 출력. 지수 표기법 사용하여 변수 초기화

#include <stdio.h>

int main(void)
{
    double x;    // 변수 선언

    x = 3.32e-3 + 9.76e-8;    // 식 작성, 10의 -3승 표현-> e-3

    printf("%f", x);    // 출력
    
    return 0;

}
