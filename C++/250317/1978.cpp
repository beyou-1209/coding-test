/*배열에 원소를 추가하는 법*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int temp, n;
    int result, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        for (int a = 1; a <= temp; a++)
        {
            if (temp % a == 0)
                cnt++;
        }

        if (cnt == 2)
        {
            result++;
        }

        cnt = 0;
    }

    cout << result << '\n';
}