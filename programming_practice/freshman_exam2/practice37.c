// 2개 이상의 결과를 반환, 기울기와 절편 계산

#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept) {
    if(x1==x2) {
        return -1;
    }
    else {
        *slope = (float)(y2 - y1) / (float) (x2 - x1);              // slope 값에 저장해주기.
        *yintercept = y1 - (*slope)*x1;                             // yintercept 값에 저장해주기 > 2개 이상 값 반환 가능.
        return 0;
    }
}
int main(void) {
    float s, y;
    if(get_line_parameter(3,3,6,6,&s,&y) == -1) {
        printf("에러\n");
    }
    else {
        printf("기울기는 %f, y절편은 %f\n", s, y);
    }
}
