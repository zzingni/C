// floor ceil fabs pow sqrt

#include <stdio.h>
#include <math.h>

int main(void) {
    double result, value = 1.6;
    result = floor(value);
    printf("%lf \n", result);

    result = ceil(value);
    printf("%lf \n", result);

    printf("-12와 12의 절대값은 각각 %f %f 이다. \n", fabs(12.0), fabs(-12.0));

    printf("10의 3승은 %.0f \n", pow(10.0, 3.0));
    printf("16의 제곱근은 %.0f \n", sqrt(16));                              // %.0f -> 실수형 소수점 이하 빼고 출력

    return 0;
}
