// 정적 변수의 활용, 정적 변수는 1번만 초기화 하고 싶을 때도 사용한다.

#include <stdio.h>
#include <stdlib.h>

void hw_init();

int main(void) {
    hw_init();
    hw_init();
    hw_init();
    return 0;
}

void hw_init() {
    static int inited = 0;
    if(inited==0) {
        printf("hw_init(): 네트워크 장치를 초기화합니다. \n");
        inited = 1;                                                 // 이후부터 inited 의 값은 1로 고정되어있음, 변하지 않음.
    }
    else {
        printf("hw_init(): 이미 초기화되었으므로 초기화하지 않습니다. \n");
    }
}
