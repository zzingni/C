// cm로 표현된 키를 피트와 인치로 변환하기 1피트 = 12인치 , 1인치 = 2.54

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    int cm, feet;
    double inch;      // 변수선언 

    printf("키를 입력하시오(cm): ");
    scanf("%d", &cm);       // 입력받기

    inch = (double) cm / 2.54; 
    feet = inch / 12;   
    inch = inch - (double) feet * 12;       // 키 변환

    printf("%d는 %d피트 %.2f인치입니다.", cm, feet, inch);        // 출력하기

    return 0;

}
