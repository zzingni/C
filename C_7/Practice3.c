// C프로그래밍_7주차_조건식 사용

```c

#include <stdio.h>

int max(int x, int y)
{
    return x > y? x : y;
}

int main(void)
{
    int x, y, larger;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    larger = max(x, y);
    printf("더 큰 값은 %d입니다. \n", larger);
    return 0;


}

```c
