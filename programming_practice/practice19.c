// LAB 도전문제 / 사용자로부터 연도를 받아서 짝수해이면 1 출력, 홀수해이면 0 출력 / if-else문 사용하지 않고 출력

#define _CRT_SECURE_NO_WARINIGS
#include <stdio.h>

int main(void)
{
    int year, result;       // 변수 선언

    printf("연도를 입력하세요: ");
    scanf("%d", &year);     // 사용자로부터 연도 입력받기

    result = (year % 2 == 0);     // 식 작성 year % 2 == 0 / year % 2 != 0

    printf("%d", result);       // 결과값 출력

    return 0;
}
