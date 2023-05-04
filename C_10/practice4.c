// 팩토리얼계산 프로그램 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int fac(int n)
{
    int result = 1;

    for(int i=1; i<=n; i++)
    {
        result *= i;
    }

    return result;
}


int main(void){

    int n;

    printf("알고 싶은 팩토리얼의 값은? ");
    scanf("%d", &n);

    printf("%d!의 값은 %d입니다.", n, fac(n));

    return 0;

}
