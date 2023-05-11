// 소수 판단하여 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n)
{
    int i;
    int count = 0;
   
    printf("숫자를 입력하시오: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
            if(count == 2)
            {
                printf("%d \n", i);
            }
        
        count = 0;
    }

    printf("\n");
    
}

int main(void)
{
    int n;
    is_prime(n);
}
