// max()함수를 호출하여서 사용자가 입력한 값 중에서 더 큰 값 찾기 //

#include <stdio.h>

int max(int x, int y);

int main(void) {

    int x, y;
    int result;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = max(x, y);
    printf("더 큰 값은 %d입니다.", result);

    return 0;

}

int max(int x, int y) {
    return (x>y)?x:y;
}
