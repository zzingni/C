# C프로그래밍 수업 개인과제

```c
// page60. LAB : 동전 던지기 게임

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void); // 함수원형

    int main(void)
    {
        int toss; // 동전 던지는 횟수
        int heads = 0; // 동전의 앞면, 초기화 필요!!!!!
        int tails = 0; // 동전의 뒷면, 초기화 필요!!!!!
        srand( (unsigned)time(NULL));   // 난수 발생

        for(toss=0; toss<100; toss++)
        {
            if(coin_toss()==1)
            {
                heads++;
            }
            else
            {
                tails++;
            }
        }

        printf("동전의 앞면: %d \n", heads);
        printf("동전의 뒷면: %d \n", tails);

        return 0;
    }

    int coin_toss(void)
    {
        int head = rand()%2;  // 난수의 나머지를 head에 대입
        return head; // head 값 반환 (0 또는 1)
    }
