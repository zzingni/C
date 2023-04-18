// 컴퓨터와 가위, 바위, 보 게임을 하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, result;
    char random;                                         // 변수선언

    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d", &number);                               // 사용자로부터 가위, 바위, 보 중에 하나 입력받기
    
    srand((unsigned)time(NULL));
    random = rand() % 3 + 1;                            // 컴퓨터 랜덤값 받기
    
    if(random == 1)
    {
        printf("컴퓨터는 가위를 선택하였습니다. \n\n");   
    }
    else if(random == 2)
    {
        printf("컴퓨터는 바위를 선택하였습니다. \n\n");
    }
    else
    {
        printf("컴퓨터는 보를 선택하였습니다. \n\n");
    }


    if(number == random)
    {
        printf("비겼습니다 \n");
    }
    else if(number > random)
    {
        printf("사용자가 이겼습니다. \n");
    }
    else
    {
        printf("사용자가 졌습니다. \n");                    // 조건식 사용하여 가위바위보 
    }

    return 0;



}






// 중첩if문 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, result;
    char random;                                         // 변수선언

    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d", &number);                               // 사용자로부터 가위, 바위, 보 중에 하나 입력받기
    
    srand((unsigned)time(NULL));
    random = rand() % 3 + 1;                            // 컴퓨터 랜덤값 받기

    if(random == 1)
    {
        printf("컴퓨터는 가위를 선택하였습니다. \n\n");

        if(number == 1)
        {
            printf("비겼습니다. \n");
        }
        else if(number == 2)
        {
            printf("사용자가 이겼습니다. \n");
        }
        else
        {
            printf("사용자가 졌습니다. \n");
        }

    }

    else if(random == 2)
    {
        printf("컴퓨터는 바위를 선택하였습니다. \n\n");

        if(number == 1)
        {
            printf("사용자가 졌습니다. \n");
        }
        else if(number == 2)
        {
            printf("비겼습니다. \n");
        }
        else
        {
            printf("사용자가 이겼습니다. \n");
        }

    }

    else 
    {
        printf("컴퓨터는 보를 선택하였습니다. \n\n");

        if(number == 1)
        {
            printf("사용자가 이겼습니다. \n");
        }
        else if(number == 2)
        {
            printf("사용자가 졌습니다. \n");
        }
        else
        {
            printf("비겼습니다. \n");
        }
        
    }

    return 0;


}

