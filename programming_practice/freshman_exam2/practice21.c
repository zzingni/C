// 순환함수 사용하여 2진수 출력

#include <stdio.h>

int print_binary(int x);

int main(void) {
    print_binary(10);
    printf("\n");
    return 0;
}

int print_binary(int x) {
    if(x>0) {
        print_binary(x/2);
        printf("%d", x%2);                // 왜 거꾸로 출력되는 것인가....(이해 필요)
    }
}
