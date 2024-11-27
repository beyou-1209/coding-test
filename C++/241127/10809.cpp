#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[26] = {
        0,
    };

    string s;
    cin >> s;

    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << (int)s.find(i) << ' ';
    }

    return 0;
}