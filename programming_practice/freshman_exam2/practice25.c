// 학생 5명의 성적 평균 계산하기

#include <stdio.h>
#define SIZE 5

int main(void) {
    int avg;
    int scores[SIZE];
    int sum=0;

    for(int i=0; i<SIZE; i++) {
        int grade;
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &grade);
        scores[i] = grade;
        sum += scores[i];
    }
    
    avg = sum / SIZE;
    printf("성적 평균 = %d", avg);

    return 0;
}
