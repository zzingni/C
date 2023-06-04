// 배열 난수로 채우기

#include <stdio.h>
#include <time.h>
#define SIZE 5

int main(void) {

    srand((unsigned)time(NULL));

    int scores[SIZE];                           // 배열 선언할 때 자료형 잊지 말기!!!!

    for(int i=0; i<SIZE; i++) {
        int j = rand()%100;
        scores[i] = j;
        printf("scores[%d]=%d\n",i,scores[i]);
    }

    return 0;
}
