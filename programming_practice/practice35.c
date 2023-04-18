// 두 개의 정수 입력받아 최대공약수 찾는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, r;                                                                   // 변수 선언 

    r = 0;                                                                         // 변수 초기화

    printf("두 개의 정수를 입력하시오(큰수, 작은수): ");                             // 두 정수 입력받기
    scanf("%d %d", &x, &y);       

    while(y != 0)                                                                  // while 반복문 사용
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("최대공약수는 %d입니다.", x);

    return 0;
}
