# C프로그래밍 12주차_배열

```c

// 배열 기초 예제

#include <stdio.h>

int main(void)
{
    int i;
    int j = 10;
    int scores[5];

    for(i=0; i<5; i++)
    {
        scores[i] = j;
        j = j + 10;

    }
    
    // scores[0] = 10;
    // scores[1] = 20;
    // scores[2] = 30;
    // scores[3] = 40;
    // scores[4] = 50;

    for(i=0; i<5; i++)
    {
        printf("scores[%d]=%d\n", i, scores[i]);
    }

    return 0;
}
