// 배열과 함수

#include <stdio.h>
#define STUDENTS 5

int get_average(int scores[], int n);

int main(void) {
    int scores[STUDENTS] = {1,2,3,4,5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("평균은 %d입니다.\n", avg);
    return 0;
}

int get_average(int scores[], int n) {
    int i;
    int sum = 0;

    for(i=0; i<n; i++) {
        sum+=scores[i];
    }

    return sum/n;
}


==============================================================================================

// 배열이 함수의 인수인 경우

#include <stdio.h>
#define SIZE 7

void print_array(int a[], int size);
void modify_array(int a[], int size);

int main(void) {
    int list[SIZE] = {1,2,3,4,5,6,7};

    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);
}

void print_array(int a[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void modify_array(int a[], int size) {
    int i;

    for(i=0; i<size; i++) {
        ++a[i];                                             // 요소의 값을 +1 증가시킨다.
    }
}
