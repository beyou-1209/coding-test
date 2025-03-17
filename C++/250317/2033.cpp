/*
정수 N이 주어져 있을 때 이 수가 10보다 크면 일의 자리에서 반올림을 하고,
이 결과가 100보다 크면 다시 10의 자리에서 반올림을 하고,
또 이 수가 1000보다 크면 100의 자리에서 반올림을 하고.. (이하 생략)
이러한 연산을 한 결과를 출력하시오.
*/

/* 관건은 각 자리 수의 숫자를 구하는 법
단, N은 자리 수가 간단하지 않음
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;

    long long tmp = 10;

    while (n >= tmp)
    {
        (n % tmp) >= tmp / 2
            ? n = ((long long)((int)n / tmp) + 1) *tmp
            : n = ((long long)(int)n / tmp) * tmp;

        tmp *= 10;
    }

    cout << n << endl;
}