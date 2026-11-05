#include<stdio.h>
int main(void)
{
    int x, y;

    scanf("%2d%2d", &x, &y);

    if(x <= 12 && y > 12 && x != 0)
        printf("MMYY\n");

    else if(x > 12 && y <= 12 && y != 0)
        printf("YYMM\n");

    else if(x <= 12 && y <= 12 && x != 0 && y != 0)
        printf("ABMIGUOUS\n");

    else
        printf("NA\n");

    return 0;
}
