// Mini Project: 공학용 계산기 프로그램 작성(팩토리얼, 싸인, 로그, 제곱근, 순열, 조합, 종료)

#include <stdio.h>
#include <math.h>

int menu(void) {
    int n;
    printf("1.팩토리얼 \n");
    printf("2.싸인 \n");
    printf("3.로그(base 10) \n");
    printf("4.제곱근 \n");
    printf("5.순열(nPr) \n");
    printf("6.조합(nCr) \n");
    printf("7.종료 \n");
    printf("선택해주세요: \n");
    scanf("%d", &n);
    return n;
}

void factorial() {
    long long n, result = 1, i;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n);
    for(i=1; i<=n; i++) {
        result *= i;
    }
    printf("%d \n\n", result);                        // 출력까지 함수에서 처리. 반환형 없음.
}

void sine() {
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("결과 = %f \n\n", result);
}

void logBase10() {
    double a, result;
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a);
    if(a<=0.0) {
        printf("오류 \n");
    }
    else {
        result = log10(a);
        printf("결과 = %lf \n\n", result);
    }
}

void sq() {
    int a, result; 
    printf("정수값을 입력하시오: ");
    scanf("%d", &a);
    result = sqrt(a);
    printf("%d \n\n", result);
}

int main(void) {
    while(1)
    {
        switch(menu()) {
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
                sq();
                break;
            case 7:
                printf("종료합니다. \n");
                return 0;
            default:
                printf("잘못된 선택입니다. \n");
                break;
        }
    }

    return 0;
}








// 추후 순열, 조합 코드 추가해보기!
