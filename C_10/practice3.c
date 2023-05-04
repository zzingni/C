// 재귀함수 사용 팩토리얼 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int fac(int n) 
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fac(n-1);         // 재귀함수 사용
    }
}


int main(void){

    int n;

    printf("알고 싶은 팩토리얼의 값은? ");
    scanf("%d", &n);

    printf("%d!의 값은 %d입니다.", n, fac(n));

    return 0;

}
