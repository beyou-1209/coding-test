#include <iostream>

using namespace std;

int max(int a1, int a2, int a3)
{
    int x = a1;
    if (a2 > x)
        x = a2;
    if (a3 > x)
        x = a3;

    return x;
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c && c == a)
    {
        cout << 10000 + (a) * 1000;
    }
    else if (a == b && b != c && c != a)
    {
        cout << 1000 + a * 100;
    }
    else if (a != b && b == c && c != a)
    {
        cout << 1000 + b * 100;
    }
    else if (a != b && b != c && c == a)
    {
        cout << 1000 + c * 100;
    }
    else if (a != b && b != c && c != a)
    {
        cout << max(a, b, c) * 100;
    }
}