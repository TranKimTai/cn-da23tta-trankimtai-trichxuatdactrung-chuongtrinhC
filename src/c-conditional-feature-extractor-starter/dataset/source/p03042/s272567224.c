#include <stdio.h>

int main(void)
{
    int string;

    scanf("%d", &string);

    int L = string / 100;
    int R = string % 100;

    if (L > 12)
    {
        if (R <= 12 && R > 0)
        {
            printf("YYMM\n");
        }
        else
        {
            printf("NA\n");
        }
    }
    else if (L <= 12 && L > 0)
    {
        if (R <= 12 && R > 0)
        {
            printf("AMBIGUOUS\n");
        }
        else
        {
            printf("MMYY\n");
        }
    }
    return 0;
}