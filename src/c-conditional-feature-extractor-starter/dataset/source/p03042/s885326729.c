#include <stdio.h>

int
main(
    void
)
{
    char s[4] = {0};
    scanf("%s", s);

    if ( ((s[0] == '0') && (s[1] != '0')) ||
         ((s[0] == '1') && ((s[1] == '1') || (s[1] == '2'))) )
    {
        if ( ((s[2] == '0') && (s[3] != '0')) ||
             ((s[2] == '1') && ((s[3] == '1') || (s[3] == '2'))) )
        {
            printf("AMBIGUOUS\n");
        }
        else
        {
            printf("MMYY\n");
        }
    }
    else
    {
        if ( ((s[2] == '0') && (s[3] != '0')) ||
             ((s[2] == '1') && ((s[3] == '1') || (s[3] == '2'))) )
        {
            printf("YYMM\n");
        }
        else
        {
            printf("NA\n");
        }
    }

    return 0;
}