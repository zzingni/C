// 출력되는 값은 무엇일까요? 
// 1번 - 2             2번 - 30          3번 - 6          4번 - 20 

#include <stdio.h>

int a = 1;
int b = 2;
int result();

int main(void)
{
    a = 3;
    b = 10;
    int c = 20;

    c = result();
    printf("%d", c);

    return 0;
}


int result()
{
    return a * b;
}
