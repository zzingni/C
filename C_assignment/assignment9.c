// lab: 나무 높이 측정, 각도기와 삼각함수를 이용하여 나무의 높이 측정하기

#include <stdio.h>
#include <math.h>                                                 // 삼각함수를 포함하는 헤더

int main(void) {
    double height, distance, tree_height, degrees, radians;       // 키, 나무와의 길이, 나무 높이, 각도(단위:도), 각도(라디안각)

    printf("나무와의 길이(단위는 미터): ");                     
    scanf("%lf", &distance);                

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180.0);                     // 라디안각 = 60분법 각도 * (파이 / 180)

    tree_height = tan(radians) * distance + height;             // 나무의 높이 = tan(라디안각) * 나무와의 길이 + 사람의 키 
    printf("나무의 높이(단위는 미터): %lf \n", tree_height);

    return 0;
}
