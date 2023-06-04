// Lab: 시간 맞추기 게임

#include <stdio.h>
#include <time.h>

int main(void) {

    time_t start, end;                          // time_t는 unsigned long 과 동일하다. (크기 큼!!!!!!!!!)

    start = time(NULL);
    printf("10초가 되면 엔터키를 누르세요\n");

    while(1) {
        if(getchar())
        {
            break;
        }
    }
    printf("종료되었습니다.\n");
    end = time(NULL);

    printf("경과된 시간은 %ld 초입니다.", end-start);                   

    return 0;
}
