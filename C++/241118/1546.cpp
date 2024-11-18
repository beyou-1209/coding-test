#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    int max = -1;
    double score;
    double result, sum;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> score;
        sum += score;
        if (score > max)
        {
            max = score;
        }
    }

    cout << ((sum / max * 100) / N);
    return 0;
}