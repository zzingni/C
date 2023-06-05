// swap()함수 사용하여 참조에 의한 호출 확인, 원본이 전달되어 함수에서 값을 변경하면 원본도 변경됨.

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void) {
    int a = 100, b = 200;
    printf("a = %d b = %d \n", a, b);

    swap(&a, &b);

    printf("a = %d b = %d", a, b);
}

void swap(int *pa, int *pb) {
    int tmp;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
