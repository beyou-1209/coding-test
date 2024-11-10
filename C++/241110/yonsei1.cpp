#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long N;
    cin >> N;

    if (N <= 100000)
    {
        if (N % 2024 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
        cout << "No";

    return 0;
}