// swap()함수 사용하여 값에 의한 호출 확인, 복사본 전달되어 원본값 변경 안 됨!

#include <stdio.h>

void swap(int a, int b);

int main(void) {

    int a = 100, b = 200;
    printf("a = %d b = %d\n", a, b);

    swap(a, b);

    printf("a = %d b = %d\n", a, b);

    return 0;
}

void swap(int a, int b) {
    int tmp=0;
    printf("a = %d b = %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("a = %d b = %d\n", a, b);
}
