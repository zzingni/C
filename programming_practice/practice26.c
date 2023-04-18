//사용자로부터 2개의 정수를 받아서 첫번째 정수가 두번째 정수로 나누어 떨어지는지 / 즉, 약수인지를 검사하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, result;         // 변수선언 int형

    printf("정수를 입력하시오: ");
    scanf("%d", &num1);
    printf("정수를 입력하시오: ");
    scanf("%d", &num2);             // 사용자로부터 두 정수 입력받기

    
    result = num1 % num2;           // 수식 작성

    switch(result)
    {
        case 0: printf("약수입니다."); break;
        default: break;

    }                               // 조건식 작성 및 출력

    return 0;

}
