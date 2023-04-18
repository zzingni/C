// 사용자로부터 몇 월인지를 정수로 입력받아 Jan와 같은 영어단어로 출력하는 프로그램을 작성하라.

#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int main(void)
{
    int month;                                  // 변수선언

    printf("월 번호를 입력하시오: ");
    scanf("%d", &month);                        // 사용자에게 월 입력받기

    switch(month)
    {
        case 1: printf("Jan"); break;           // switch문 작성
        case 2: printf("Feb"); break;
        case 3: printf("Mar"); break;
        case 4: printf("Apr"); break;
        case 5: printf("May"); break;
        case 6: printf("Jun"); break;
        case 7: printf("Jul"); break;
        case 8: printf("Aug"); break;
        case 9: printf("Sep"); break;
        case 10: printf("Act"); break;
        case 11: printf("Nov"); break;
        default: printf("Dec"); break;

    }

    return 0;
    
}
