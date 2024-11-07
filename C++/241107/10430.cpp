#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c = 0;
    cin >> a >> b >> c;

    cout << (a + b) % c << '\n';
    cout << ((a % c) + (b % c)) % c << '\n';
    cout << (a * b) % c << '\n';
    cout << ((a % c) * (b % c)) % c;

    return 0;
}