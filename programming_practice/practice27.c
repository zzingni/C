// 소득세 계산기 만들기
// 산출세액 = (과세표준 * 세율) - 누진공제액

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int value, result, plus;    
    float percent;                                  // 변수 입력, int value(과세표준), result(산출세액), 누진공제액(plus) float percent(세율)

    printf("과세 표준: ");
    scanf("%d", &value);                            // 사용자로부터 과세표준 입력받기

    if(value < 12000000)
    {
        percent = 0.06;
        plus = 0;
    }
    else if(value < 46000000)
    {
        percent = 0.15;
        plus = 1080000;
    }
    else if(value < 88000000)
    {
        percent = 0.24;
        plus = 5220000;
    }
    else if(value < 150000000)
    {
        percent = 0.35;
        plus = 14900000;
    }
    else if(value < 300000000)
    {
        percent = 0.38;
        plus = 19400000;
    }    
    else if (value < 500000000)
    {
        percent = 0.40;
        plus = 25400000;
    }
    else if(value < 1000000000)
    {
        percent = 0.42;
        plus = 35400000;
    }
    else
    {
        percent = 0.45;
        plus = 65400000;
    }
            result = ( value * percent) - plus;    
            printf("산출세액: %d", result);         // if문 작성 및 계산식 작성, result 식을 if문 선언 전에 작성하면 밑에서는 대입 안 됨. if 문 빠져나온 뒤 식 작성 필요.
    
    return 0;                                       // 출력하기
}
