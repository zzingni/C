// Lab: 주사위 던지기, 주사위를 1000번 던져서 각 면이 나오는 횟수 출력

#include <stdio.h>
#include <time.h>
#define SIZE 6

int main(void) {
    srand((unsigned)time(NULL));

    int sum;
    int num[SIZE] = {0,};                                           // 모두 0으로 초기화시켜줘야함(0부터 빈도수 누적)!!!!!!!

    for(int i=0; i<=1000; i++) {
        ++num[rand()%6];
    }
    printf("========================\n");
    printf("숫자         빈도\n");
    printf("========================\n");

    for(int j=0; j<SIZE; j++) {
        printf(" %d           %d\n", j, num[j]);
    }

    return 0;
}
