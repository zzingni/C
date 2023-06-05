// 정올 구구단 출력 프로그램

#include <stdio.h>

void gugudan();

int main(void) {

    gugudan();

    return 0;
}

void gugudan() {

    int x, y;
    scanf("%d %d", &x, &y);

    if((x<2 || x>9) || (y<2 || y>9))
    {
        printf("INPUT ERROR!");
    }
    else
    {
        if(x>y) {
            for(int i=1; i<=9; i++) {
                for(int j=y; j<=x; j++) {
                    printf("%d * %d = %2d   ", j, i, j*i);
                }
                printf("\n");
            }
        }
        else {
            for(int i=1; i<=9; i++) {
                for(int j=x; j<=y; j++) {
                    printf("%d * %d = %2d   ", j,i,j*i);
                }
                printf("\n");
            }
        }
    }
}
