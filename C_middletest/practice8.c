// goto문 사용하여 구구단 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    int i;
    
    i = 1;

    loop:
        printf("%d * %d = %d \n", 3, i, 3 * i);
        i++;
        if(i==10) goto end;
        goto loop;

end:

    return 0;

}