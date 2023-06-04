// Lab: 팩토리얼 계산 함수

#include <stdio.h>

int fact(int x);

int main(void) {

    int x, result;

    printf("알고 싶은 팩토리얼의 값은? ");
    scanf("%d", &x);
    result = fact(x);

    printf("%d!의 값은 %d 입니다.", x, result);
    return 0;
}

int fact(int x) {
    
    int value;
    value = 1;

    for(int i=1; i<=x; i++)
    {
        value *= i;
    }

    return value;
}
