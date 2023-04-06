// 정수를 5번 입력받아 합 구하기 //

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int n, sum=0, i=0;

    while ( i<5) 
    {

        printf("값을 입력하시오: ");
        scanf("%d", &n);
        sum += n;
        i++;

    }
    printf("합계는 %d입니다.", sum);
    return 0;

}

