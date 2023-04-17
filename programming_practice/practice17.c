// 나눗셈과 나머지 연산자를 사용하여 거스름돈의 액수와 점원이 지급해야할 거스름돈을 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int price, money, change; 
    int c1000, c500, c100;      // 변수 선언

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);         // 물건 값 입력받기

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);        // 투입한 금액 입력받기
    
    change = money - price;
    
    c1000 = change / 1000;
    change = change % 1000;
    
    c500 = change / 500;
    change = change % 500;
    
    c100 = change / 100;         // 식계산 (거스름돈)

    printf("거스름돈은 다음과 같습니다. \n");
    printf("천원권: %d장 \n", c1000);
    printf("오백원 동전: %d개 \n", c500);
    printf("백원 동전: %d개", c100);        // 거스름돈 출력

    return 0;

}
