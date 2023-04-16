// 마일을 미터로 환산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float mile, meter;    // 변수 선언 = mile, meter (실수형태)
    
    printf("마일을 입력하시오: ");
    scanf("%f", &mile);    // 입력받기

    meter = mile * 1609;    // 식 사용 (meter = mile * 1609)
    
    printf("%.1f 마일은 %.2f미터입니다.", mile, meter);     //변환된 값 출력

    return 0;

}
