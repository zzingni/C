// 간접 참조 연산자 

#include <stdio.h>

int main(void)
{
    int i =10;

    int* p;

    p = &i;
    *p = 5;

    printf("%d", i);

}
