// 정수의 합을 계산하는 프로그램 //

#include <stdio.h>

int get_integer(void);
int sum(int x, int y);

int main(void) {
    
    int x, y, result;
    x = get_integer();
    y = get_integer();

    result = sum(x, y);

    printf("두 수의 합은 %d입니다.", result);

    return 0;
}

int get_integer(void) {
    int value;

    printf("정수를 입력하시오 : ");
    scanf("%d", &value);

    return value;
}

int sum(int x, int y) {
    return x + y;
}
