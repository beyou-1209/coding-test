#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int X, N;
    int sum = 0;
    cin >> X;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        sum += a * b;
    }

    if (X == sum)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}