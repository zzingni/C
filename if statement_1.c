#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int vol;

    printf("컵의 용량을 입력하세요 : \n");
    scanf_s("%d", &vol);

    if (vol<100)
    printf("입력한 컵의 용량은 %dmL이며, 사이즈는 Small 입니다.", vol);
    else if(vol<200)
    printf("입력한 컵의 용량은 %dmL이며, 사이즈는 Medium 입니다.", vol);
    else
    printf("입력한 컵의 용량은 %dmL이며, 사이즈는 Large 입니다.", vol);

    return 0;
}
