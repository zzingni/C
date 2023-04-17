// 이차방정식의 근을 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double dis;        // 변수 선언

    printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);                              // 이차방정식 계수 입력받기 a, b, c

    if(a==0)
    {
        printf("방정식의 근은 %.2f입니다.", -c / b);             // a가 0이면 근은 -c/b이다.
    }                                                   

    else 
    {
        dis = b * b -4.0 * a * c;                               // double형으로 계산되어야 하기 때문에 필히 소수점 붙여주기
        if(dis > 0)
        {
            printf("방정식의 근은 %.2f입니다. \n", (-b + sqrt(dis)) / (2.0 * a) );      // 괄호로 묶어주지 않으면 나누기가 먼저 계산됨!!!!! 주의!!!!!!!
            printf("방정식의 근은 %.2f입니다. \n", (+b + sqrt(dis)) / (2.0 * a) );      // double형으로 계산되어야 하기 때문에 필히 소수점 붙여주기
        }
        else if(dis == 0)
        {
            printf("방정식의 근은 %d입니다. \n", -b/(2*a));     // 도전문제!!! 형식지정자 %d로 바꿔주어야 -1 나옴! 주의!
        }
        else
        {
            printf("실근은 존재하지 않습니다\n ");                   // 위의 조건에 해당되지 않으면 다음과 같은 공식을 이용하여 실근을 구한다
        }
    }

    return 0;


}
