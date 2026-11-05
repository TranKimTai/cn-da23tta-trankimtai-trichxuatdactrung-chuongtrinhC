#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[4];
    int a, b, temp;
    scanf("%s", s);
    temp = atoi(s);
    a = temp / 100;
    b = temp % 100;
    if (0 < a && a < 13)
    {
        if (0 < b && b < 13)
            printf("AMBIGUOUS");
        else
            printf("MMYY");
    }
    else
    {
        if (0 < b && b < 13)
            printf("YYMM");
        else
            printf("NA");
    }
    return 0;
}