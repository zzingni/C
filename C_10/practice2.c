// 함수 이용하여 정수 받고 더하는 프로그램 작성 //

#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>


int get_integer(void);
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);


int main(void)
{
    int x, y;

    x = get_integer();
    y = get_integer();

    printf("두 수의 합은 %d 차는 %d 입니다. \n", add(x, y), minus(x,y));
    printf("두 수의 곱은 %d 몫은 %d 입니다.", multi(x,y), div(x,y));

    return 0;

}

int get_integer(void)
{
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);

    return value;
}

int add(int x, int y)
{
    return x+y;
}

int minus(int x, int y)
{
    return x-y;
}

int multi(int x, int y)
{
    return x*y;
}

int div(int x, int y)
{
    return x/y;
}
