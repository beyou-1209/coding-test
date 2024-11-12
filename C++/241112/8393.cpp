#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}