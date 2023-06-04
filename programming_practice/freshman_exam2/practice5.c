// 섭씨 온도를 화씨 온도로, 또 그 반대로 변환하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void);
double C2F(double c_temp);
double F2C(double f_temp);

int main(void) {

    char corf;
    double value;

    while(1) {
        menu();
        printf("메뉴에서 선택하세요: ");
        corf = getchar();                       // scanf 주소값 저장하는거 아님!!!!!!! scanf 필요x

        if(corf == 'q')
        {
            break;
        }
        else if(corf == 'c')
        {
            printf("섭씨온도: ");
            scanf("%lf", &value);
            printf("화씨온도: %f \n\n",C2F(value));
        }
        else if(corf == 'f')
        {
            printf("화씨온도: ");
            scanf("%lf", &value);
            printf("섭씨온도: %f \n\n",F2C(value));
        }
        getchar();
    }
    return 0;

}

void menu(void) {
    printf("========================\n");
    printf("'c' 섭씨온도에서 화씨온도로 변환 \n");
    printf("'f' 화씨온도에서 섭씨온도로 변환 \n");
    printf("'q' 종료 \n");
    printf("========================\n");
}

double C2F(double c_temp) {
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {
    return (f_temp - 32.0) * 5.0 / 9.0;
}
