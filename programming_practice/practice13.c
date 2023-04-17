// 사용자료부터 질량(m)과 속도(v)를 받아서 운동에너지(E) 계산 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double mass, speed, kenergy;    // 변수 선언 (모든 변수 double형 사용)

    printf("질량(kg): ");
    scanf("%lf", &mass);
    printf("속도(m/s): ");
    scanf("%lf", &speed);       // 사용자로부터 질량과 속도 입력받기

    kenergy = mass * speed * speed / 2.0;       // 식 계산 E=mv의 2제곱 / 2.0

    printf("운동에너지(J): %lf", kenergy);      // 출력하기
    
    return 0;
    
}
