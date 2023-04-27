// 거스름돈 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
 
    int price, money, result, c1000, c500,c100;                          // 변수 선언
    
    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);
    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);                                         // 사용자에게 입력받기

    result = money - price;
    
    c1000 = result / 1000;
    result = result % 1000;

    c500 = result / 500;
    result = result % 500;

    c100 = result / 100;
    result = result % 100;                                                 // 식 작성
 
    printf("거스름돈은 다음과 같습니다. \n\n");
    printf("천원권: %d장\n오백원 동전: %d개\n백원 동전: %d개", c1000, c500, c100);                  // 출력   

    return 0;


}
