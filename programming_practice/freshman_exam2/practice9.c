// 로또 번호 생성하기 + seed 초기화 

#include <stdio.h>
#include <time.h>

int main(void) {
    int number;

    srand( (unsigned)time(NULL));

    for(int i = 1; i<=6; i++)
    {
        number = rand()%46;
        printf("%d ", number);
    }

    return 0;

}
