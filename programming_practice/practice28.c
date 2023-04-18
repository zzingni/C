// 사용자로부터 3개의 정수를 읽어들인 후에 if-else문 사용하여 가장 작은 값 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;                           // 변수 선언

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);         // 사용자로부터 3개의 정수 받기

    if(num1 < num2)
    {
        if(num1 < num3)
        {
            printf("제일 작은 정수는 %d입니다.", num1);
        }
        else 
        {
            printf("제일 작은 정수는 %d입니다.", num3);
        }           
        
    }
    else if(num2 < num3)
    {
        printf("제일 작은 정수는 %d입니다.", num2);
    }
    else
    {
        printf("제일 작은 정수는 %d입니다.", num3);
    }                                               // if문 사용하여 최소값 찾기
  
    return 0;
    
}
