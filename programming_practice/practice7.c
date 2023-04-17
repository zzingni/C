// 하나의 실수 입력받아서 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double f;    // 변수선언
    
    printf("실수를 입력하시오: "); 
    scanf("%lf", &f);     // 실수갑 입력받기
    
    printf("실수 형식으로는 %f입니다 \n", f);
    printf("지수형식으로는 %e입니다", f);   // 실수형식, 지수형식 출력

    return 0;


}
