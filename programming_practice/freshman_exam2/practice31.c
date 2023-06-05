// 최소값 찾기 활용하여 최대값 찾기로 변경

#include <stdio.h>
#include <time.h>

int main(void) {
    srand((unsigned) time(NULL));
    int max;
    int price[10];

    printf("-----------------------------------------------------------------------------\n");
    for(int i=1; i<=10; i++) {                               // 출력값에만 표시하면 되기때문에 굳이 배열 줄 필요 없음.
        printf("%d\t", i);
    }
    printf("\n-----------------------------------------------------------------------------\n");
    for(int j=0; j<10; j++) {
        price[j] = (rand()%100)+1;
        printf("%d\t", price[j]);
    }

    max = price[0];
    for(int a=0; a<10; a++) {
        if(price[a]>max) {
            max = price[a];
        }
    }

    printf("\n\n최대값은 %d 입니다.", max);

    return 0;

}
