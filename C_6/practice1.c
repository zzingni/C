// 반복문 활용_정수의 합 //


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0, i = 1;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);

    while (i <= n)
    {
        sum+= i;
        i++;

    }

    printf("1부터 %d까지의 합은 %d 입니다", n, sum);

    return 0;
}
