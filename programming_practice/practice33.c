// 사용자로부터 키를 입력받아서 표준체중을 계산한 후, 사용자의 체중과 비교하여 저체중인지, 표준체중인지, 과체중인지를 판단하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int cm, kg;
    float sample;                               // 변수 선언
                           

    printf("체중과 키를 입력하시오: ");
    scanf("%d %d", &cm, &kg);                   // 사용자로부터 체중과 키 입력받기

    sample = (cm - 100) * 0.9;                  // 표준체중 식 선언

    if(kg > sample)                             // 조건문 작성 (표준체중과 비교)
    {
        printf("과체중입니다. \n");
    }
    else if(kg < sample)
    {
        printf("저체중입니다. \n");
    }
    else
    {
        printf("표준체중입니다. \n");
    }

    return 0;

}
