// 놀이공원에서 키와 나이를 질문한 후에 답변 받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age, height;              // 변수 선언

    printf("키를 입력하시오(cm): ");
    scanf("%d", &height);
    printf("나이를 입력하시오: ");
    scanf("%d", &age);          // 키와 나이 입력받기


    if((height >= 140) && (age >=10))
    {
        printf("타도 좋습니다. \n");
    }
    else
    {
        printf("죄송합니다. \n");
    }                           // if문 사용하여 "타도 좋습니다" "죄송합니다" 출력

    return 0;

}

