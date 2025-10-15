/*
입력 받은 대로 출력하는 프로그램을 작성하시오.
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다.
각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 각 줄은 100자를 넘지 않으며, 최대 입력은 100줄,,,
    // 각 라인을 그대로 출력하고 싶다면 getline 함수를 사용할것...
    string str;
    while (getline(cin, str))
    {
        cout << str << endl;
    }

    return 0;
}