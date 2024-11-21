#include <iostream>
#define MAX 1001
using namespace std;

int main(int argc, char const *argv[])
{
    char word[MAX] = {};
    int N;
    cin >> word;
    cin >> N;

    cout << word[N - 1];

    return 0;
}