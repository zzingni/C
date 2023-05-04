# C프로그래밍 10주차

```c

// 별 찍기 //

#include <stdio.h>

int main(void)
{
    for(int i=1; i <=5; i++)
    {
        //for(int j=1; j<=5-i; j++)
        for(int j=4; j>=i; j--)
        {
            printf(" ");
        }

        for(int s=1; s<=i; s++)
        {
            printf("*");
        }


    printf("\n");

}


return 0;

}

```c
