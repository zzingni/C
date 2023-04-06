// 반복문 활용_짝수의 합 //

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int n, i;
    int sum=0;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    while ( i<=n )
    {
        if(n % 2==0)
        {
            sum += i;
            i++;
        }

    }

    printf("1부터 %d까지의 짝수 합은 %d 입니다", n, sum);

    return 0;
}
