#include <iostream>
#define MAX 10000
using namespace std;

int main(int argc, char const *argv[])
{
    int N, X;
    int A[MAX];
    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] < X)
        {
            cout << A[i] << " ";
        }
    }
}