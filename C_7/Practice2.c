// C프로그래밍_7주차_함수활용

```c

#include <stdio.h>


int max();

int main(void)
{
    printf("%d", max(10, 20));
    return 0; // 밑에 함수 선언하고 int main으로 돌아오면 출력값 자체가 없기 때문에 출력되는 것은 없음 
              // max()자리에 밑 함수에서 return된 20 자체가 들어감 max(20)
              // main안에서 출력해주려면 printf("%d", max(10, 20)); 넣어주면 됨.
}

int max (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

```c
