# C프로그래밍 11주차 

```c

// 가격 입력하면 등급에 따라 할인 적용된 금액 나타내기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution (char grade, int price)
{
    int answer = 0;
    
    if(grade=='S')
    {
        answer = price * 0.95;
    }
    
    if(grade=='G')
    {
        answer = price * 0.9;
    }
    
    if(grade=='V')
    {
        answer = price * 0.85;
    }

    return answer;
 // 등급을 이상한 값 T로 입력하면 if-if-if 문에서는 answer 값 0으로 반환됨 , else if 쓰면 else문으로 빠지기 때문에 오류 생김!!!!!
}

int main(void)
{
    int price;
    char grade;
    int answer;

    printf("등급을 입력하시오: ");
    scanf("%c", &grade);

    printf("금액을 입력하시오: ");
    scanf("%d", &price);

    answer = solution(grade, price);

    printf("%d", answer);

    return 0;
}

```c
