// 조합 계산 함수

#include <stdio.h>

int get_integer();
int factorial(int a);
int combination(int a, int b);

int main(void) {
    int x, y;
    int result;
    x = get_integer();
    y = get_integer();                  // 정수를 입력 받아  팩토리얼 계산 함수 활용하여 계산

    printf("C(%d, %d) = %d", x, y, combination(x,y));

    return 0;
}

int get_integer() {                     // 정수 입력받아 반환!!!!!!!! 반환값 있기 때문에 int형 사용해야함.
    int n;          
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int factorial(int a) {
    if(a<=1) {                                             
        return 1;
    }
    else {
        return (a * factorial(a-1));
    }
}
int combination(int a, int b) {
    int result;
    result = factorial(a) / (factorial((a-b)) * factorial(b));                  // 분모 괄호 꼭 필요!!!, 괄호 안 씌우면 앞에서부터 계산됨.

    return result;
}
