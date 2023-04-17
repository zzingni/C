// 윤년 판단 프로그램
// 조건 : 4로 나누어떨어지는 연도 중에서 100으로 나누어떨어지는 연도만 제외한다
//        400으로 나누어떨어지는 연도는 무조건 윤년이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year, result;       // 변수 설정

    printf("연도를 입력하시오: ");
    scanf("%d", &year);     // 사용자로부터 연도 입력받기

    result = ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0 );      // 조건식 작성, 괄호 신경써서 묶기

    if (result=1)        
    {
        printf("%d년은 윤년입니다.", year);
    }
    else
    {
        printf("%d년은 윤년이 아닙니다.", year);
    }         // if문 사용하여 출력형태 설정
    
    return 0;

}
