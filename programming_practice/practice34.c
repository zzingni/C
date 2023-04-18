// 놀이공원의 자유이용권 가격을 계산하는 프로그램 작성. 현재 시간과 나이를 입력받아 요금 화면에 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int time, age;                          // 변수 선언

    printf("현재 시간과 나이를 입력하시오(시간 나이): ");
    scanf("%d %d", &time, &age);            // 사용자에게 시간과 나이 입력받기

    if(time < 17)                           // 조건문 작성. 중첩 if-else문 사용하여 먼저 시간 검사하고 나중에 나이 검사
    {
        if((age >= 3) && (age <= 12) || age >= 55)
        {
            printf("요금은 25000원 입니다. \n");
        }
        else
        {
            printf("요금은 34000원 입니다. \n");
        }
    }
    else
    {
            printf("요금은 10000원 입니다. \n");
    }

    return 0;

}
