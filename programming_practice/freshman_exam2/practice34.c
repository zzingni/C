// 간접 참조 연산자

#include <stdio.h>

int main(void) {
    int i = 10;
    int *p = NULL;
    p = &i;

    printf("%d \n", *p);                            // 형식지정자 %d!

    return 0;

}


====================================================================================================
  
  
#include <stdio.h>

int main(void) {
    int i = 3000;
    int *p = NULL;

    p = &i;
    printf("p = %p\n", p);
    printf("&i = %p\n", &i);
    printf("i = %d\n", i);
    printf("*p = %d\n", *p);                    // 포인터 사용할 때는 항상 주소인지, 값인지에 따라 형식지정자 주의할 것!!!!!!!

    return 0;
}


===================================================================================================
  
  
#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int *p;

    p = &x;
    printf("p = %p\n", p);
    printf("*P = %u\n\n", *p);

    p = &y;
    printf("p = %p\n", p);
    printf("*p = %u\n\n", *p);

    return 0;
}


===================================================================================================
  
  
  // 포인터 값으로 주소의 값 변경

#include <stdio.h>

int main(void) {
    int i = 10;
    int *p;

    p = &i;
    printf("i = %d\n", i);

    *p = 20;
    printf("i = %d", i);

    return 0;
}

