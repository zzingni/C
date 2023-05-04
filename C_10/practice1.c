// 함수 이용하여 정수 받고 더하는 프로그램 작성 //

#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);

    return value;
}

int sum(int x, int y)
{
    return x + y;
}

int main(void)
{
    int x, y;

    x = get_integer();
    y = get_integer();

    printf("두 수의 합: %d", sum(x, y));

    return 0;

}
