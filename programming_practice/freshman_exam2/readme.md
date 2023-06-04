# 1학년 1학기 기말고사 준비

```c

// print_stars() 함수를 2번 호출하여서 다음과 같이 출력하는 프로그램 작성 //

#include <stdio.h>

void print_stars();

int main(void)
{
    print_stars();
    printf("\n Hello World! \n");
    print_stars();

    return 0;
}

void print_stars() {
    
    for(int i=1; i<20; i++)
    {
        printf("*");
    }
}
