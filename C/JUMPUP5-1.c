// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고
// 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// - 입력: 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
// (자연수 < 100)
// - 출력: 최댓값과 최댓값이 몇 번째 수인지 출력한다.

#include <stdio.h>

int main()
{
    int numbers[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int max_value = numbers[0];
    int max_index = 1;

    for (int i = 1; i < 9; i++)
    {
        if (numbers[i] > max_value)
        {
            max_value = numbers[i];
            max_index = i + 1;
        }
    }

    printf("%d\n%d\n", max_value, max_index);

    return 0;
}