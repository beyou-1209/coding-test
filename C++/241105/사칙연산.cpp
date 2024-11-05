// 사칙연산 출력하기
// C++ 구문에 익숙해지자

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) // int argc = argument count (main함수에 전달되는 데이터의 갯수)
{                                      // char *argv[] / argv = argument variable / char *argv[]: 문자열의 주소를 저장하는 포인터배열
    int a, b;

    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";

    return 0;
}