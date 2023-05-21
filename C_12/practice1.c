// 배열 난수로 채우기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5                                          // 기호상수 선언

int main(void)
{
    int i;
    int scores[SIZE];   

    srand( (unsigned) time(NULL));                      // 시드 초기화
    for(i=0; i<SIZE; i++)
    {
        scores[i] = rand()%100;                         // 0~99까지의 난수 발생시켜 scores 배열에 대입
    }

    for(i=0; i<SIZE; i++)
    {
        printf("scores[%d]=%d\n",i,scores[i]);          // 대입된 배열 scores 값 출력
    }

    return 0;
}
