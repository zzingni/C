// (1) i의 값을 형식지정자인 %o, %x를 사용하여 8진수, 16진수로도 출력하여보라
// (2) i 를 -1로 초기화한 후에 %x를 사용해서 출력해보자. 어떤 값이 출력되는가?

#include <stdio.h>

int main(void)
{
    int i = 255;

    printf("%d \n", i);
    printf("8진수 : %o, 16진수 : %x \n", i, i);

    i = -1;
    printf("16진수 : %x \n", i);

    i = -2;
    printf("16진수 : %x \n", i);

    i = -3;
    printf("16진수 : %x", i);
    
    return 0;

}
