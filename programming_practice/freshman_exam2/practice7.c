// Lab: 소수 찾기, 양의 정수 n이 소수가 되려면 1과 자기 자신만을 약수로 가져야 한다.

#include <stdio.h>

int get_integer();
int prime(int n);

int main(void) {

    int n;
    n = get_integer();

    if(prime(n)==0)
    {
        printf("%d은 소수가 아닙니다.", n);
    }
    else
    {
        printf("%d은 소수입니다.", n);
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
    }
    return 1;                           /* for문이 반복되는 동안 계속 나머지가 0인지 검사, 맞으면 0 리턴 아니면 반복 끝난 후에 1 리턴해줘야 하기 때문에,
                                            for 루프 밖에서 return 1 해줘야함. */
}
