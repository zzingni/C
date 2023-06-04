// Lab: 소수 찾기 도전문제, 1부터 사용자가 입력한 숫자 n 사이의 모든 소수를 찾도록 프로그램 변경

#include <stdio.h>

int get_integer();
int prime(int n);

int main(void) {

    int n;
    n = get_integer();

    for(int i=2; i<=n; i++)                 // prime()함수를 호출하여 i가 입력받은 정수 n까지 반복하여 검사하면서 prime(i)의 값이 1이면 출력
    {
        if(prime(i)==1) {
            printf("%d ", i);
        }
    }

    return 0;
}

int get_integer() {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int prime(int n) {
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }

        return 1;
    }                         
}
