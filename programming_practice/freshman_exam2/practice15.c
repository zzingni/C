// 각도기와 삼각함수 이용하여 나무의 높이 측정

#include <stdio.h>
#include <math.h>

int main(void) {
    double height, distance, tree_height, degrees, radians;                 // 사람의 키, 사람과 나무 사이의 거리, 나무의 높이, 각도, 라디안 값

    printf("나무와의 길이(단이는 미터): ");
    scanf("%lf", &distance);

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180.0);
    tree_height = tan(radians) * distance + height;
    printf("나무의 높이(단위는 미터): &lf \n", tree_height);

    return 0;
}
