# C프로그래밍 13주차 수업 <포인터>

```c
// 포인터의 주소값

#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 69;
    float f = 12.3;

    printf("i의 주소 : %p\n", &i);                      // 변수 i의 주소 출력(16진수)
    printf("c의 주소 : %p\n", &c);                      // 변수 c의 주소 출력(16진수)
    printf("f의 주소 : %p\n", &f);                      // 변수 f의 주소 출력(16진수)

    return 0;
}
