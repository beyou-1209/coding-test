#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int h, m;

    cin >> h;
    cin >> m;

    if (m - 45 < 0)
    {
        h = h - 1;
        m = m + 15;
    }

    else
    {
        m = m - 45;
    }

    if (h < 0)
    {
        h = 23;
    }

    cout << h << " " << m << endl;

    return 0;
}