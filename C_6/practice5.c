// do...while 문을 이용한 메뉴

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int n;

    do
    {
        printf("1---새로 만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시요:");
        scanf("%d", &n);
    }
    while( n < 1 || n < 3);
        printf("선택된 메뉴=%d\n", n);
        

    return 0;

    
}
