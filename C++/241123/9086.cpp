#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string word;

    cin >> n;

    while (n--)
    {
        cin >> word;
        cout << word[0] << word[word.length() - 1] << "\n";
    }
}