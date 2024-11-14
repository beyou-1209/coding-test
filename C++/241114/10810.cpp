#include <iostream>
#define MAX 101

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M;          // N은 바구니의 갯수..
    int arr[MAX] = {}; // 초기화를 해주자..
    int i, j, k;

    cin >> N >> M;

    for (int a = 0; a < M; a++) // 공을 M번 넣음.
    {
        cin >> i >> j >> k;

        for (int b = i; b <= j; b++)
        {
            arr[b] = k;
        }
    }

    for (int c = 1; c <= N; c++)
    {
        cout << arr[c] << " ";
    }

    return 0;
}