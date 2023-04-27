// 평균 계산하기 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    int x, y, result;
    char op;

    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op)
    {
        case '+':
        result = x + y;
        break;

        case '-':
        result = x - y;
        break;

        case '*':
        result = x * y;
        break;

        case '/':
        result = x / y;
        break;

        case '%':
        result = x % y;
        break;

    }

    printf("%d %c %d = %d", x, op, y, result);

    return 0;
    


}
