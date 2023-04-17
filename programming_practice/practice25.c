// 산술계산기 만들어보기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char op;
    int x, y, result;           // 변수 선언, char, int

    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);             // 사용자로부터 수식 입력받기

    if(op=='+')                                  // 조건문 작성, 순차적으로 조건 검색하는데 하나가 참이면 밑에는 검사하지 않고 빠져나옴.
    { 
        result = x + y;
    }
    else if(op=='-')
    {
        result = x - y;
    }
    else if(op=='*')
    {
        result = x * y;
    }
    else if(op=='/')
    {
        result = x / y;
    }
    else
    {
        result = x % y;
    }

    printf("%d %c %d = %d", x, op, y, result);         // 출력하기          

    return 0;

}
    
   
