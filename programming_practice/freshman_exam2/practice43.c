// 문자열 찾기 첫번째 줄에는 KOI의 개수, 두번째 줄에는 IOI의 개수

#include <stdio.h>
#include <string.h>

int main(void) {
    char ans[10000];
    int value[2] = {0, };

    scanf("%s", ans);

    for(int i=0; i<strlen(ans)-2; i++) {
        if((ans[i]=='K') && (ans[i+1]=='O') && (ans[i+2]=='I'))
        {
            ++value[0];
        }
        if((ans[i]=='I') && (ans[i+1]=='O') && (ans[i+2]=='I'))
        {
            ++value[1];
        }
    }

    for(int j=0; j<2; j++) {
        printf("%d\n", value[j]);
    }

}
