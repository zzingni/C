// Lab: 시간 맞추기 게임, 사용자에게 10초가 지나면 엔터키를 누르라고 한 후에 정확한 시간과 얼마나 차이가 나는지 출력

#include <stdio.h>
#include <time.h>                                               // time()함수를 포함하는 헤

int main(void) {

    time_t start, end;                                          // unsigned long 과 동일 (+42억)
    start = time(NULL);                                         // 1970년 1월 1일 이후부터 현재까지 경과된 시간을 초 단위로 변환한 것.
    printf("10초가 되면 아무 키나 누르세요 \n");

    while(1) {
        if(getchar())
        break;                                                  // 항상 참이다가 엔터를 누르면 break를 통해 빠져나옴
    }
    printf("종료되었습니다. \n");
    end = time(NULL);                                           // 1970년 1월 1일 이후부터 현재까지 경과된 시간을 초 단위로 변환한 것.                                         
    printf("경과된 시간은 %d 초입니다. \n", end - start);        // 경과한 시간 출력 : end - start

    return 0;
}

