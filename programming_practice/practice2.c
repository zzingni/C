// 삼각형의 높이와 밑변 받아서 넓이 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float base, height, area;   // 변수선언 base, height, area
   
    printf("삼각형의 밑변: ");
    scanf("%f", &base);
    
    printf("삼각형의 높이: ");
    scanf("%f", &height);   // 입력받기

    area = 0.5 * height * base;   // 식 계산 area = 0.5 * height * base
        
    printf("삼각형의 넓이: %.2f", area);    // 출력하기 
    
    return 0;

}
