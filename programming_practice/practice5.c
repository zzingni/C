// 몸무게를 입력받아 달에서의 몸무게 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weight_on_moon, weight_on_earth;     // 변수선언 달에서의무게, 지구에서의 무게

    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &weight_on_earth);      // 몸무게 입력받기

    weight_on_moon = weight_on_earth * 0.17; // 식 계산 : 달에서의 무게 = 지구에서의 무게 * 0.17

    printf("달에서의 몸무게는 %.2lfkg입니다.", weight_on_moon); // 값 출력

    return 0;

}
