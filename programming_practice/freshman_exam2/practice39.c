// Mini Project: 자율 주행 자동차, 자율 주행 자동차에서 getSensorData() 함수를 호출하여 3개의 double형 데이터를 받아보자

#include <stdio.h>
#include <stdlib.h>

void getSensorData(double *p) {
    for(int i=0; i<3; i++) {
        p[i] = rand()%100;
        // *p , *(p+1), *(p+2)
    }
    return;
}

int main(void) {
    double sensorData[3];
    getSensorData(sensorData);

    printf("왼쪽 센서와 장애물과의 거리: %lf \n", sensorData[0]);
    printf("중간센서와 장애물과의 거리: %lf \n", sensorData[1]);
    printf("오른쪽 센서와 장애물과의 거리: %lf \n", sensorData[2]);

    return 0;
}
