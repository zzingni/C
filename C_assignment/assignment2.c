// page67 LAB 자동차 게임 도전문

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>                          // getch() 함수가 포함되어 있는 헤더
#include <time.h>

void dist_car(int car_number, int distance);

int main(void)
{
    int i;
    int car1_dist=0, car2_dist=0, car3_dist=0;               // 변수 초기화, car3 추가

    srand( (unsigned)time(NULL));                            // 랜덤값 초기화
    
    for(i=0; i < 6; i++)                                     // 6번 반복
    {
        car1_dist += rand()%100;                             // 0부터 99까지의 랜덤값 누적(어떤 값을 100으로 나눈 나머지는 0~99까지가 생성됨)
        car2_dist += rand()%100;                             // 0부터 99까지의 랜덤값 누적(어떤 값을 100으로 나눈 나머지는 0~99까지가 생성됨)
        car3_dist += rand()%100;                             // 0부터 99까지의 랜덤값 누적(어떤 값을 100으로 나눈 나머지는 0~99까지가 생성됨)
        dist_car(1, car1_dist);                 
        dist_car(2, car2_dist);
        dist_car(3, car3_dist);                              // dist_car함수 호출, 차번호와 누적 거리 인수로 전달
        printf("--------------------\n");                    // 한번 반복될 때마다 점선 및 개행으로 구분 처리
        _getch();                                            // 키보드로 하나의 키를 입력받는 함수, '콘솔 입력'을 사용하기 때문에 표준 입력 버퍼를 사용하지 않고 입력된 키 값을 즉시 반환함. 어떤 키를 누르든지 해당 키값을 반환하면서 즉시 종료됨.
    }

    return 0;
}

void dist_car(int car_number, int distance)
{
    int i;
    printf("CAR #%d: ", car_number);
    for(i=0; i<distance/10; i++)                
    {
        printf("*");                                         // (누적 랜덤값 / 10) 의 몫을 *로 찍기. ex) 누적 랜덤값이 90이면 별 9개가 찍힘
    }
    printf("\n");
}
