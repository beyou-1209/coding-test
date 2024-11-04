// 그림과 같이 9*9 격자판에 쓰여진 81개의 자연수 또는 0이 주어질 때,
// 이들 중 최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지
// 구하는 프로그램을 작성하시오.
// - 입력: 첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 수가
// 주어진다. (0 ≤ 자연수 ≤ 100)
// - 출력: 최댓값과 최댓값의 위치가 몇 행 몇 열인지 출력한다.

#include <stdio.h>

int main()
{
    int numbers[9][9];
    int max = -1;
    int max_row, max_col = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &numbers[i][j]);

            if (numbers[i][j] > max)
            {
                max = numbers[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", max_row + 1, max_col + 1);

    return 0;
}
