# C Express책 Programming 예제 연습

```c

// 연봉으로 10억 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double price, year; // 변수 선언 : 연봉(단위:만원), 걸리는 시간(단위:년)

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%lf", &price);// 입력받기

    year = 1000000000 / (price * 10000); // 계산식 : 100000000 / 연봉(단위환산필요) = 걸리는 시간, 선순위 계산 괄호 해주기!!!!!!!!!!

    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf", year); // 출력하기

    return 0;


}
