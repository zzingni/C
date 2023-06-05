#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};                              // 구조체 선언 문장 끝 세미콜론!!!!!!!!!!!!!!!

int main(void) {
    struct student s1;

    s1.number = 20230001;
    strcpy(s1.name,"홍길동");
    s1.grade = 4.5;

    printf("학번: %d\n", s1.number);
    printf("이름: %s\n", s1.name);                  // 형식지정자 %s인거 잊지말기!!!!!!!!!!!
    printf("학년: %f\n", s1.grade);

    return 0;
    
    }
