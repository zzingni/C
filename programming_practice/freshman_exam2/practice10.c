// Lab: 동전 던지기 게임, 동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력한다.

#include <stdio.h>
#include <time.h>

int toss_coin(void);

int main(void) {
    int front=0, back=0;
    srand((unsigned)time(NULL));

    for(int i=1; i<=100; i++)
    {
        if(toss_coin()==0) {
            back++;
        }
        else {
            front++;
        }
    }

    printf("동전의 앞면: %d \n", front);
    printf("동전의 뒷면: %d \n", back);

    return 0;
}

int toss_coin(void) {                               // 하나의 값만 출력할 수 있으니까 랜덤으로 나온 값 출력 후, 메인 함수에서 더해주기.
    int value = rand()%2;
    return value;
}
