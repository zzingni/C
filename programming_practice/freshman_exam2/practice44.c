// 정올, 숫자의 개수. 어떤 세 숫자의 곱의 결과를 구하고, 쓰인 숫자의 개수 출력하기.

#include <stdio.h>

void number(int x, int y, int z);

int main(void) {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);

    number(a, b, c);

    return 0;
}

void number(int x, int y, int z) {
    int result=0;
    int value[10] = {0, };

    result = x * y * z;                         // 17037300
    //printf("%d", result);

    int num1 = 0;

    while(1) {
        num1 = result%10;                       // 0
        value[num1]++;                          // value[0]++
        result /= 10;                           // 1703730

        if(result == 0) {
            break;
        }
    }

    for(int j=0; j<10; j++) {
        printf("%d\n", value[j]);
    }
}
