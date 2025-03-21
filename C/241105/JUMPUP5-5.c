// 단어 S와 정수 n이 주어졌을 때, S의 n번째 글자를 출력하는 프로그램을 작성하시오.
// - 입력: 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다.
// (단어의 최대 길이는 1000이다.)
// 둘째 줄에 정수 n이 주어진다. (1 ≤ 𝑛𝑛 ≤ 𝑆𝑆 )
// - 출력: S의 n번째 글자를 출력한다.

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    int n;

    scanf("%s", S);
    scanf("%d", &n);

    printf("%c\n", S[n - 1]);

    return 0;
}