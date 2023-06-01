// KOI(첫번째 줄) IOI(두번째 줄)

#include <stdio.h>
#include <string.h>                     // 문자열 라이브러리 함수

int main(void)
{
    char arr[10001];
    int KOI = 0, IOI=0;
    scanf("%s", arr);                   // 시작주소를 뜻함 &arr 안됨!!!!!!!!!! arr을 주면 어차피 주소를 넘겨주는 것 값에 저장할 땐 &arr[인덱스] 
                                        // strlen()->문자열 길이 반환 strlen(const char *str); strlen(arr)
                                        // 3글자 arr[i] && arr[i+1] && arr[a+2]  -> 인덱스에 접근한 것 뿐, 실제 i값이 변화되는 것이 아님
    for(int i=0; i<strlen(arr)-2; i++)
    {
        if((arr[i]=='K')&&(arr[i+1]=='O')&&(arr[i+2]=='I'))
        {
            KOI++;
        }
        if((arr[i]=='I')&&(arr[i+1]=='O')&&(arr[i+2]=='I'))
        {
            IOI++;
        }
    }

    printf("%d\n%d",KOI,IOI);
}
