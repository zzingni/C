#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct student s1;

    printf("학번을 입력하시오: ");
    scanf("%d", &s1.number);

    printf("이름을 입력하시오: ");
    scanf("%s", s1.name);                   // 문자열을 문자 형식으로 배열에 입력. 형식지정자 %s / 배열 자체에 입력하는 거라 앰퍼센트 안 붙임!!!!!!!!

    printf("학점을 입력하시오(실수): ");
    scanf("%lf", &s1.grade);

    printf("학번: %d\n", s1.number);
    printf("이름: %s\n", s1.name);
    printf("학점: %.2f\n", s1.grade);

    return 0;

}
