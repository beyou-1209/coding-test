#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, D, E;
    int H, M;

    cin >> A >> B;
    cin >> C;

    D = C / 60;
    E = C % 60;

    if (E + B >= 60)
    {
        H = (D + A + 1) % 24; // 23시 이후는 다시 0시가 됨을 고려
        M = E + B - 60;
    }

    else
    {
        H = (D + A) % 24;
        M = E + B;
    }

    cout << H << " " << M << endl;

    return 0;
}