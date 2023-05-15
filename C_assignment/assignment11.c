// mini project: 공학용 계산기 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int menu(void)                                  // 메뉴 출력 프로그램 작성, 반환형 : int
{
    int n;
    printf("1. 팩토리얼 \n");
    printf("2. 싸인 \n");
    printf("3. 로그(base 10) \n");
    printf("4. 제곱근 \n");
    printf("5. 순열(npr) \n");
    printf("6. 조합(nCr) \n");
    printf("7. 종료 \n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;                                   // 반환형이 있으니 return 값 필요! (잊지 말기)
}

void factorial()                                // 팩토리얼 계산 함수 작성
{
    long long n, result=1, i;                   // long long 타입의 변수 n, i, result 선언 후 result는 1로 초기화
    printf("정수를 입력하시오: ");
    scanf("%lf", &n);                           // 사용자가 입력한 정수를 n에 저장    
    for(i=1; i<=n; i++)
    {
        result *= i;
    }                                           // 정수 n까지의 팩토리얼 계산식 for문으로 작성(1*2*3*4~~)
    printf("결과 = %lld \n\n", result);         // long long 타입이라 형식지정자 lld로 지정. 결과값 출력.
}

void sine()                                     // 싸인 값 출력하는 함수 작성
{
    double a, result;                           // double형 변수 a, result 선언
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);                           // 각도 입력받아 a에 저장
    result = sin(a);                            // sin(a)를 result에 대입
    printf("결과 = %lf \n\n", result);          // result값 출력
}

void logBase10()                                // log10x를 출력하는 함수
{   
    double a, result;                           // double형 변수 a, result 선언
    printf("실수값을 입력하시오: ");            
    scanf("%lf", &a);                           // 실수 입력받아 a에 저장
    if(a <= 0.0)
    {
        printf("오류 \n");                      // a가 0보다 작거나 같으면 '오류' 출력
    }
    else
    {
        result = log10(a);                      // a가 0보다 크면 log10(a)값을 result에 대입
        printf("결과 = %lf \n\n", result);      // result값 출력
    }
}

void square()                                   // 제곱근을 출력하는 함수 작성
{
    double a, result;                           // double형 변수 a, result 선언
    printf("정수를 입력하세요: ");
    scanf("%lf", &a);                           // 정수 입력받아 a에 저장

    result = sqrt(a);                           // 제곱근함수 sqrt(a) 결과값을 result에 대입
    printf("결과 = %lf \n\n", result);          // result값 출력
}

int main(void)
{
    while(1)                                                // 항상 참. 무한루프.
    {
        switch(menu())
        {
            case 1:
                factorial();
                break;
            case 2:
                sine();
                break;
            case 3:
                logBase10();
                break;
            case 4:
                square();
                break;
            case 7: 
                printf("종료합니다. \n");
                return 0;                                   // 종료시에는 메뉴 출력 X, 0값 리턴해주기!
            default:
                printf("잘못된 선택입니다. \n");
                break;                                      // switch문 사용하여 선택된 메뉴에 해당하는 프로그램 실행
        }
    }

    return 0;
}
