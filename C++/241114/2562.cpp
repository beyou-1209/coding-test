#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int arr[10];
    int max = 0;
    int min = 100;
    int max_index;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    cout << max << "\n";
    cout << max_index + 1 << "\n";
}