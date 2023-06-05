// 포인터의 선언과 NULL값으로 초기화 

#include <stdio.h>

int main(void) {
    int i =10;
    double f = 12.3;
    int *pi = NULL;

    double *pf = NULL;
    pi = &i;
    pf = &f;

    printf("%p %p \n", pi, &i);
    printf("%p %p", pf, &f);

    return 0;
}
