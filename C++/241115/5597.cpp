#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[31] = {};
    int a;

    for (int i = 1; i <= 28; i++)
    {
        cin >> a;
        arr[a] = 1;
    }

    for (int j = 1; j <= 30; j++)
    {
        if (arr[j] == 0)
        {
            cout << j << "\n";
        }
    }
    return 0;
}