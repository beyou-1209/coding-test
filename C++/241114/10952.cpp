#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    while (1)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
            return 0;
        }

        cout << a + b << "\n";
    }
}