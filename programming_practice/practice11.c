// 평을 제곱미터로 환산하는 프로그램 작성 1평 - 3.3제곱미터, 기호상수 이용하여 1평당 제곱미터 나타내기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    double y;    // 변수선언

    const double SQMETER_PER_PYEONG = 3.3058;   // 기호상수 이용하여 제곱미터 나타내기, 출력값 102.479800 / 31 -> 3.3058 나옴
  

    printf("평을 입력하세요: ");
    scanf("%d", &x);    // 평 입력받기

    y = x * SQMETER_PER_PYEONG; // 식계산 

    printf("%lf평방미터입니다.", y);    // 출력하기
    return 0;


}
