// C프로그래밍_7주차_사용자정의함수사용

#include <stdio.h>

void print_stars()
{
    for ( int i = 0; i < 30; i++)
    {
        printf("*");
    }
    
}

int main(void)
{

    print_stars();
    printf("\nHello World!\n");
    print_stars();
    printf("\n");
    return 0;

}
