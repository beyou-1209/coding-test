#include <stdio.h>

struct point
{
    int x;
    int y;
};
int quadrant(struct point p)
{
    if ((p.x > 0) && (p.y > 0))
    {
        printf("1");
    }
    else if ((p.x < 0) && (p.y > 0))
    {
        printf("2");
    }
    else if ((p.x < 0) && (p.y < 0))
    {
        printf("3");
    }
    else
    {
        printf("4");
    }
}
int main()
{
    struct point p;
    scanf("%d\n%d", &p.x, &p.y);
    quadrant(p);
    return 0;
}