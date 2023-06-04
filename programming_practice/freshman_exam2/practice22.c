// 최대 공약수 구하기

#include <stdio.h>

int gcd(int, int);

int main(void) {
    printf("%d\n", gcd(30,20));
}

int gcd(int x, int y) {

    if(y==0) {
        return x;
    }
    else {
        return gcd(y, x%y);                 // 20, 10   ->  10, 0  =>  10 출력
    }
}
