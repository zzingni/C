// 평균 계산하기 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    double w, h, area, perimeter;

    w = 10.0;
    h = 5.0;

    area = w * h;
    perimeter = 2 * (w+h);


    printf("사각형의 넓이: %f \n", area);
    printf("사각형의 둘레: %f", perimeter);

    return 0;


}
