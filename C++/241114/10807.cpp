#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int S[101];
    int v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
    }

    cin >> v;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (S[i] == v)
            result++;
    }

    cout << result;
}