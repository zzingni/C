# jungol 문제 연습

```c

// 구구단

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int s, e;

    while(1)
    {
        scanf("%d %d", &s, &e); 
        if((s>=2 && s<=9) && (e>=2 && e<=9))
        {
            break;
        }
        else
        {
            printf("INPUT ERROR! \n");
        }
    }

    if(s>e)                                                   // 감소식
    {
        for(int i = 1; i<=9; i++)
        {
            for(int j=s; j>=e; j--)
            {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
            printf("\n");
        }
    }
    else
    {
        for(int i = 1; i<=9; i++)
        {
            for(int j = s; j<=e; j++)
            {
                printf("%d * %d = %2d   ", j, i, j*i);
            } 
        printf("\n");
        }
    }

    return 0;
}
