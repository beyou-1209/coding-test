#include <iostream>
#define MAX 101
using namespace std;

int main(int argc, char const *argv[])
{
    int N, M;
    int i, j;
    int arr[101] = {};
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        arr[i] = i;
    }

    for (int a = 0; a < M; a++)
    {
        int temp;
        cin >> i >> j;

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}