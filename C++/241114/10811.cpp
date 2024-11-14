#include <iostream>
#define MAX 101
using namespace std;

int main(int argc, char const *argv[])
{
    int N, M;
    int arr[MAX] = {};
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        arr[i] = i;
    }

    for (int a = 0; a < M; a++)
    {
        int i, j;
        cin >> i >> j;

        for (int b = 0; b <= (j - i) / 2; b++)
        {
            swap(arr[i + b], arr[j - b]);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}