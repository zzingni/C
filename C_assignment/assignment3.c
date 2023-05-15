// floor()와 ceil 함수 사용

#include <stdio.h>
#include <math.h>                                       // 수학 라이브러리 함수, 일반적으로 double형의 매개 변수와 반환값 가짐.

int main(void)
{
    double result, value = 1.6;                         // double형의 변수 result 변수 선언, value는 1.6으로 초기화

    result = floor(value);                              // floor는 x보다 크지 않은 가장 큰 정수(=내림)
    printf("%lf \n", result);                           // 1.6보다 크지 않은 정수는 1이므로 결과값 1.00000~

    result = ceil(value);                               // ceil은 x보다 작지 않은 가장 작은 정수(=올림)
    printf("%lf", result);                              // 1.6보다 작지 않은 정수는 2이므로 결과값 2.00000~

    return 0;
}
