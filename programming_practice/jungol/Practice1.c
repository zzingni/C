// 정올 숫자의 개수
// 385 /10 %10 /10 %10
// a[0] -> 3 숫자의 개수 셀 때 배열의 인덱스 많이 활용
// 자리수는 정해져있고 가변적이라서 반복문 사용해서 값이 나오지 않으면 반복문 빠져나오기
// int t[10] = {0,} >> 모두 0으로 초기화의 정규식(원리적으로)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, sum=0;
    int t[10]={0};

    scanf("%d %d %d", &a, &b, &c);

    sum = a * b * c;    

    while(1)
    {
        if(sum == 0)
        {
            break;
        }

        int count = sum % 10;
        t[count] += 1;
        sum = sum / 10;

    }
    for(int i=0; i<10; i++)
    {
        printf("%d \n", t[i]);
    }
    return 0;
}
