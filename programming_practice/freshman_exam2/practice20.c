// 순환 함수(재귀 함수), 팩토리얼 계산

#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d)\n", n);

    if(n<=1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main(void) {

    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    printf("%d!은 %d입니다. \n", num, factorial(num));

    return 0;
}
