#include <stdio.h>
#include <string.h>

#define MAX 1000000

int main()
{
    int len;
    int count = 0;
    // 공백을 기준으로 문자열 나누기
    char S[MAX];
    scanf("%[^\n]s", S);
    len = strlen(S);

    if (len == 1 && S[0] == ' ')
    {
        printf("%d", count);
        return 0;
    }

    for (int i = 1; i < len - 1; i++)
    {
        if (S[i] == ' ')
        {
            count++;
        }
    }

    printf("%d", count + 1);

    return 0;
}