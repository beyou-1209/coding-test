#include <stdio.h>
#include <string.h>

typedef struct
{
    char time[10];
    char food[20];
    int calories;
} Meal;

void printCaloriesByTime(Meal meals[], int size, const char *time)
{
    int totalCalories = 0;
    printf("%s 시간대에 섭취한 칼로리:\n", time);
    for (int i = 0; i < size; i++)
    {
        if (strcmp(meals[i].time, time) == 0)
        {
            printf("- %s: %d 칼로리\n", meals[i].food, meals[i].calories);
            totalCalories += meals[i].calories;
        }
    }
    printf("총 칼로리: %d\n\n", totalCalories);
}

void printTotalCalories(Meal meals[], int size)
{
    int totalCalories = 0;
    for (int i = 0; i < size; i++)
    {
        totalCalories += meals[i].calories;
    }
    printf("하루 동안 먹은 전체 칼로리: %d\n\n", totalCalories);
}

int main()
{
    Meal meals[] = {
        {"아침", "시리얼", 120},
        {"점심", "김밥", 300},
        {"점심", "닭가슴살 샐러드", 200},
        {"저녁", "피자", 800}};
    int size = sizeof(meals) / sizeof(meals[0]);

    int choice;
    char time[10];

    while (1)
    {
        printf("식단 관리 프로그램\n");
        printf("1. 시간대별 섭취한 칼로리 출력\n");
        printf("2. 하루 동안 먹은 전체 칼로리 출력\n");
        printf("3. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("검색할 시간대를 입력하세요 (아침, 점심, 저녁): ");
            scanf("%s", time);
            printCaloriesByTime(meals, size, time);
            break;
        case 2:
            printTotalCalories(meals, size);
            break;
        case 3:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("올바른 메뉴를 선택하세요.\n");
            break;
        }
    }

    return 0;
}
