// Lab: 삼각함수 그리기, 싸인함수 그래프를 90도 회전하여 그려보기

#include <stdio.h>
#include <math.h>
#define PI 3.141592                                           // 파이값 기호상수 정의

double rad(double degree)                                     // rad(라디안)함수 작성. 60도는 약 1rad
{
    return PI * degree / 180.0;
}

void drawbar(int height)                                       // '*' 출력 함수 작성, i가 height이 될 때까지 '*'찍기
{
    for(int i = 0; i < height; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int degree, x, y;                                         // 변수 degree, x, y 선언
    for(degree = 10; degree <= 170; degree += 20)             // 각도 degree가 10부터 170까지 20도씩 변화
    {
        y = (int)(60 * sin(rad((double)degree)) + 0.5);       // 각도를 double으로 형변환 후 rad함수 호출. 그 후 sin()함수 호출하여 리디안 값을 sin값으로 반환.
        drawbar(y);                                           // 호도법 60도를 곱해준 값을 y에 대입 후 drawbar()함수 호출..
    }

    return 0;

}
