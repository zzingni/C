// 반복문 활용하여 반복횟수 입력받아 두 수의 합 출력하기 // 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{

    int x, y, n, sum;
    int i = 1;

    printf("반복횟수를 설정하시오: ");
    scanf("%d", &n);

    while ( i <= n) 
    {
    printf("두 수를 입력하시오: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("Case #%d : %d + %d = %d\n", i, x, y, sum);
    i++;

   
    }

    printf("종료되었습니다");
    
    return 0;

}
