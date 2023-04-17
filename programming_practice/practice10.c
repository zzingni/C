// 상자의 부피 구하는 프로그램 작성 부피는 길이*너비*높이, 모두 double형의 실수로 입력받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double w, h, d;     // 변수 선언 double형 길이, 높이, 너비

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &w, &h, &d);    // 입력받기

    printf("상자의 부피는 %f입니다.", w*h*d );    // 출력하기(출력식에서 계산 부피 = 길이 * 높이 * 너비)

    return 0;

} 
