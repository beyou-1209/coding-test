// 가로, 세로의 크기가 각각 100인 정사각형 모양의 흰색 도화지가 있다. 이 도화지 위에
// 가로, 세로의 크기가 각각 10인 정사각형 모양의 검은색 색종이를 색종이의 변과 도화지의 변이
// 평행하도록 붙인다. 이러한 방식으로 색종이를 한 장 또는 여러 장 붙인 후 색종이가 붙은
// 검은 영역의 넓이를 구하는 프로그램을 작성하시오. 예를 들어 흰색 도화지 위에 세 장의
// 검은색 색종이를 그림과 같은 모양으로 붙였다면 검은색 영역의 넓이는 260이 된다.
// *조건 : 배열은 전역변수로 선언하며 색종이를 붙이는 함수를 작성하여 main 함수에서 호출하시오.
// - 입력: 첫째 줄에 색종이의 수가 주어지고 둘째 줄부터 한 줄에 하나씩 색종이를 붙인 위치가 주어진다.
// 색종이의 위치는 도화지의 왼쪽 아래 모서리를 (0,0)으로 표현했을 때 좌표로 표현한다.
// - 출력: 색종이가 붙은 검은 영역의 넓이를 출력한다.

#include <stdio.h>
#define SIZE 100

int canvas[SIZE][SIZE] = {0}; // 도화지 크기는 100x100

void attachPaper(int x, int y)
{
    for (int i = x; i < x + 10; i++)
    {
        for (int j = y; j < y + 10; j++)
        {
            canvas[i][j] = 1; // 색종이 부분을 1로 표시
        }
    }
}

int calculateArea()
{
    int area = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (canvas[i][j] == 1)
            {
                area++;
            }
        }
    }
    return area;
}

int main()
{
    int n;
    scanf("%d", &n); // 색종이의 수 입력받기

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y); // 색종이 위치 입력받기
        attachPaper(x, y);
    }

    int blackArea = calculateArea();
    printf("%d\n", blackArea); // 검은색 영역의 넓이 출력

    return 0;
}