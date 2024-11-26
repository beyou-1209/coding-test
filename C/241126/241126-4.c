#include <stdio.h>

void A(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }
    if (n > 1)
    {
        printf("%d\n", n);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    A(N);

    return 0;
}
