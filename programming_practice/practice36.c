// 방사능 원소의 반감기 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year;
    int halflife;                                             // 변수 선언    
    double value;
    double y; 

    value = 100;  
    y = value;
    year = 0;                                              // 변수 초기화     

    printf("반감기를 입력하시오(년): ");                      // 사용자로부터 값 입력받기(반감기)
    scanf("%d", &halflife);

    while(value > y/10.0)                                         // 반복구조 사용하여 1/10 이하로 되기까지 걸린시간 계산
    {
        year = year + halflife;
        value = value / 2;
        printf("%d년 후에 남은 양=%f \n", year, value);

    }

    printf("1/10 이하로 되기까지 걸린 시간=%d년 \n", year);

    return 0;
}
