// 화씨 온도 입력 받아 섭씨온도 환산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double c, f;    // 변수선언 double형 화씨, 섭씨온도

    printf("화씨값을 입력하시오: ");    // 입력받기
    scanf("%lf", &f);

    c = (5.0 / 9.0) * (f - 32.0);     // 식 계산 : c(섭씨) = 5 / 9 * (화씨-32) -> 실수값 입력받을때는 수식의 정수도 소숫점으로 표시
    
    printf("섭씨값은 %.2lf도 입니다.", c);      // 출력하기

    return 0;


}
