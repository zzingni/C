// 삼각 함수 라이브러리

#include <stdio.h>
#include <math.h>

int main(void) 
{
    double pi = 3.1415926535;
    double x, y;

    x = pi/2;
    y = sin(x);
    printf("sin(%f) = %f \n", x, y);
    y = cos(x);
    printf("cos(%f) = %f \n", x, y);

    return 0;
}

// 기타 함수 사용

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    system("dir");
    printf("아무 키나 치세요\n");
    _getch();
    system("cls");

    return 0;
}
