// pow()와 sqrt() 함수 사용

#include <stdio.h>
#include <math.h>                                       // 수학 라이브러리 함수, 일반적으로 double형의 매개 변수와 반환값 가짐.

int main(void)
{
    printf("10의 3승은 %.0f.\n", pow(10.0, 3.0));       // pow(10.0, 3.0) -> 10의 3승은 1000 반환. %.0f는 소숫점 이하 표시하지 않을 때 사용(%.f랑 출력값 동일), pow(10, 3)도 출력값 1000으로 동일.
    printf("16의 제곱근은 %.0f.\n", sqrt(16));          // sqrt(16) -> 16의 제곱근 반환.

    return 0;
}
