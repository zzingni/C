// 3개의 정수값을 입력받아서, 3개의 정수값 중에서 최대값 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, z, result;        // 변수 선언

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);      // 입력받기

    result = (x > y) ? ( (x > z) ? x : z) : ( (y > z) ? y : z); // 조건문 작성

    printf("최대값은 %d입니다.", result); // 출력하기

    return 0;
    
}
