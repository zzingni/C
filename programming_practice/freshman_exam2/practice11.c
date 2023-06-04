// 난수를 이용하여서 자동차 게임 작성 

#include <stdio.h>
#include <time.h>
#include <conio.h>

void disp_car(int, int);
int main(void) {
    int car1=0, car2=0;
    srand((unsigned)time(NULL));

    for(int i=0; i<=6; i++)
    {
        car1 += rand()%100;
        car2 += rand()%100;
        disp_car(1, car1);
        disp_car(2, car2);
        printf("--------------------------\n");
        _getch();
    }
}

void disp_car(int number, int distance) {
    printf("CAR%d: ", number);
    for(int j=0; j<distance/10; j++)
    {
        printf("*");
    }
    printf("\n");                                       // car1과 2사이의 개행.
}
