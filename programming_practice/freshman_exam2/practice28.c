// 극장 좌석 예약하기 좌석은 10개, 예약이 끝난 좌석은 1로 예약이 안 된 좌석은 0으로 나타낸다.

#include <stdio.h>

int main(void) {
    int seats[10] = {1,2,3,4,5,6,7,8,9,10};
    int check[10] = {0, };
    char ans;
    int n;

    while(1) {

        printf("좌석을 예약하시겠습니까?(y 또는 n) ");                                           
        scanf(" %c", &ans);                                         // 공백 문자 제외하고 받아야 정상 작동됨!!!!!!!!!!!!!!!                            

        if(ans == 'n') {
            break; 
        }
            printf("--------------------------- \n");

            for(int i=0; i<10; i++) {
                printf("%d ", seats[i]);
            }

            printf("\n---------------------------\n");

            for(int j=0; j<10; j++) {
                printf("%d ", check[j]);
            }

            printf("\n몇 번째 좌석을 예약하시겠습니까? ");
            scanf("%d", &n);

            if(check[n-1]==0) {
                ++check[n-1];
                printf("예약되었습니다. \n"); 
            }
            else {
                printf("이미 예약된 자리입니다. \n");
            }
    }

    return 0; 
}

