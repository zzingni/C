// 구의 표면적과 체적을 구하는 프로그램을 작성하라. 구의 반지름은 실수로 입력되고 파이값은 기호상수를 사용.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

    const double PI = 3.141592;     // 기호상수 선언, = 표시 붙여주기!

    double half, x, y;        // 변수선언 half-반지름, x-표면적, y-체적

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &half);        // 입력받기

    x = 4 * PI * half * half;
    y = 4 * PI * half * half * half / 3;     // 계산식 사용 y = (4 / 3) * PI * half * half * half; 로 하면 1 * PI 가 되어버림

    printf("표면적은 %.2lf입니다. \n체적은 %.2lf입니다. \n", x, y);       // 출력

    return 0;


}
