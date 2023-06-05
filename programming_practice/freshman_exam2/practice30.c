// Lab: 최소값 찾기, 배열에 들어있는 정수 중에서 최소값을 찾는 문제

#include <stdio.h>
#include <time.h>

int main(void) {

    srand((unsigned) time(NULL));
    int price[10];

    printf("-----------------------------------------------------------------------------------------------\n");
    for(int i=1; i<=10; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    printf("------------------------------------------------------------------------------------------------\n");
    for(int j=0; j<10; j++) {
        price[j] = (rand()%100)+1;
        printf("%d\t", price[j]);
    }
    printf("\n\n"); 
    int min = price[0];                                     // 위에서 min=price[0] 으로 선언하면 쓰레기값 들어가기 때문에 rand함수로 랜덤값 입력 후에 min=price[0] 넣어주기!!!!
    for(int a=0; a<10; a++) {
        if(price[a]<min) {
            min = price[a];
        }
    }
    printf("최소값은 %d입니다.", min);

}
