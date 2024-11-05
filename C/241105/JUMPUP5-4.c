// 2차원 배열이 주어졌을 때 (i, j) 위치부터 (x, y) 위치까지 저장되어 있는 수들의 합을 구하는 프로그램을 작성하시오.
// 배열의 (i, j) 위치는 i행 j열을 나타낸다.
// - 입력: 첫째 줄에 배열의 크기 N, M(1<=N, M<=300)이 주어진다.
// 다음 N개의 줄에는 M개의 정수로 배열이 주어진다.
// 그 다음 줄에는 반복할 횟수 K가 주어진다.
// 다음 K개의 줄에는 4개의 정수로 i, j, x, y가 주어진다.(i<=x, j<=y)
// - 출력: k개의 줄에 순서대로 배열의 합을 출력한다.

#include <stdio.h>
#define MAX 300

int main()
{
    int N, M, K;
    int array[MAX][MAX];
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    scanf("%d", &K);

    for (int q = 0; q < K; q++)
    {
        int i, j, x, y;
        int sum = 0;

        scanf("%d %d %d %d", &i, &j, &x, &y);

        for (int row = i - 1; row < x; row++)
        {
            for (int col = j - 1; col < y; col++)
            {
                sum += array[row][col];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}