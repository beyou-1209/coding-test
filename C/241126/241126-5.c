#include <stdio.h>

void A(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        { // 첫 번째 줄
            if (j % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

        for (int j = 0; j < N; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    A(N);

    return 0;
}
