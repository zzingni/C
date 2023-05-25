#include <stdio.h>

int main(void)
{
    int i = 10;
    double f = 12.3;
    int* pi = NULL;

    double* pf = NULL;
    pi = &i;
    pf = &f;

    printf("%p %p \n", pi, &i);
    printf("%p \n ", pi+1);                         // 주소값에 +1을 해주면 주소값이 달라짐
    printf("%p %p", pf, &f);

    return 0;
}
