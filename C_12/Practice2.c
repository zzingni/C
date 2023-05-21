// 성적 평균 계산하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5                                  // 기호 상수 선언, 5명이니까 5로. 10으로 선언하면 10개의 값을 받아야 함.

int main(void)
{
    int scores[STUDENTS];
    int sum = 0;
    int i, average;

    for(i=0; i<STUDENTS; i++)                       // 성적 입력받는 반복문 작성
    {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);                    // 받은 값을 주소값으로 저장
    }
    for(i=0; i<STUDENTS; i++)
    {
        sum += scores[i];                           // sum에 성적 누적
    }

    average = sum / STUDENTS;                       // 평균 구하기
    printf("성적 평균 = %d\n", average);            // 평균 출력

    return 0;
}
