// 월급을 입력하면 연봉과 세금을 계산(기호상수 사용)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
 
    const int MONTHS = 12;
    int m_salary, y_salary;
    double tax;

    printf("월급을 입력하시요: ");
    scanf("%d", &m_salary);

    y_salary = m_salary * MONTHS;
    tax = y_salary * TAX_RATE;

    printf("세금은 %f입니다.", tax);

    return 0;

}
