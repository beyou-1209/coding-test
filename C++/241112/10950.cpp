#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    return 0;
}