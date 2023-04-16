// 태양빛 도달시간, 빛의 속도는 1초에 30만 km 이동, 태양과 지구 사이의 거리는 약 1억 4960만 km이다.

#include <stdio.h>

int main(void)
{
    double light_speed = 300000;    
    double distance = 149600000;
    
    double time;    // 변수 선언 빛의속도, 거리, 도달시간

    time = distance / light_speed;   // 도달시간 계산식 작성 : 도달시간 = 거리 / 빛의속도

    printf("빛의 속도는 %.6lfkm/s \n",light_speed);
    printf("태양과 지구와의 거리 %.6lfkm \n", distance);
    printf("도달 시간은 %.6lf초 \n", time);     // 화면에 출력

    time = (int) (time / 60);

    printf("도달 시간은 %f 분입니다.", time); // 도전문제 : 분단위로 출력하기
                                            // 형식지정자 %d로 하면 오류 -> int형으로 '형변환' 만 시켜줌 -> 출력 자체는 %f 으로 해야함.

    return 0;

}
