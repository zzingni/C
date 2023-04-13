# C프로그래밍_7주차_백준문제

```c

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{

    int x, y, sum;

    printf("두 수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    while ( x!=0 && y!=0) 
    {
    printf("두 수를 입력하시오: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("%d + %d = %d\n", x, y, sum);
    }

    printf("종료되었습니다");
    
    return 0;

}

```c
