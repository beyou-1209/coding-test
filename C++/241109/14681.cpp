#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a, b; // 초기화를 해야하는 때와 하지 말아야하는 때를 잘 구분 못하는 듯

    cin >> a;
    cin >> b;

    if (a > 0 && b > 0)
    {
        cout << "1";
    }
    else if (a < 0 && b > 0)
    {
        cout << "2";
    }
    else if (a < 0 && b < 0)
    {
        cout << "3";
    }
    else if (a > 0 && b < 0)
    {
        cout << "4";
    }
    return 0;
}