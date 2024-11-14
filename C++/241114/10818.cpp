#include <iostream>

using namespace std;

int main()
{
    // N을 입력받는다
    int N;
    cin >> N;

    // 최솟값과 최댓갑의 초기값 설정
    int max = -1000000;
    int min = 1000000;

    // 배열을 정의
    int arr[N + 1];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        // 배열 값이 max값보다 크다면 그 값을 max에 저장
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // 배열 값이 min값보다 작다면 그 값을 min에 저장
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max;

    return 0;
}