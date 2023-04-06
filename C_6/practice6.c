// 숫자 추측하기 //

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    srand((unsigned)time(NULL));
    int answer = rand()%100;
    int guess;
    int tries = 0;

    // 반복 구조
    do
    {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("HIGH \n");
            if (guess < answer)
            printf("LOW \n");
    } while (guess != answer);

    printf("축하합니다. 시도횟수=%d\n", tries);

    return 0;
    

}
