#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    char k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        sum += k - 48;
    }
    cout << sum << "\n";

    return 0;
}